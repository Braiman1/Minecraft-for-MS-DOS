#!/usr/bin/env python3
"""Convert the existing indexed PNG losslessly to palette+indices (except VGA DAC precision at runtime)."""
import argparse
import hashlib
import pathlib
import struct
import zlib


def convert(source, target):
    png = pathlib.Path(source).read_bytes()
    if png[:8] != b'\x89PNG\r\n\x1a\n':
        raise ValueError('Invalid PNG signature')
    chunks, offset = {}, 8
    while offset < len(png):
        length = struct.unpack_from('>I', png, offset)[0]
        tag = png[offset + 4:offset + 8]
        data = png[offset + 8:offset + 8 + length]
        expected = struct.unpack_from('>I', png, offset + 8 + length)[0]
        if zlib.crc32(tag + data) & 0xffffffff != expected:
            raise ValueError('PNG CRC mismatch')
        chunks[tag] = chunks.get(tag, b'') + data
        offset += length + 12
    w, h, depth, color, compression, filtering, interlace = struct.unpack('>IIBBBBB', chunks[b'IHDR'])
    if (w, h, depth, color, compression, filtering, interlace) != (256, 256, 8, 3, 0, 0, 0):
        raise ValueError('Expected 256x256, 8-bit indexed, non-interlaced atlas')
    raw = zlib.decompress(chunks[b'IDAT'])
    if len(raw) != (w + 1) * h:
        raise ValueError('Unexpected decoded PNG length')
    pixels, previous = bytearray(), bytearray(w)
    for y in range(h):
        mode = raw[y * (w + 1)]
        row = bytearray(raw[y * (w + 1) + 1:(y + 1) * (w + 1)])
        for x in range(w):
            left, up = row[x - 1] if x else 0, previous[x]
            corner = previous[x - 1] if x else 0
            if mode == 0:
                predictor = 0
            elif mode == 1:
                predictor = left
            elif mode == 2:
                predictor = up
            elif mode == 3:
                predictor = (left + up) // 2
            elif mode == 4:
                p = left + up - corner
                a, b, c = abs(p - left), abs(p - up), abs(p - corner)
                predictor = left if a <= b and a <= c else up if b <= c else corner
            else:
                raise ValueError('Unknown PNG filter')
            row[x] = (row[x] + predictor) & 255
        pixels.extend(row)
        previous = row
    palette, alpha = chunks[b'PLTE'], chunks.get(b'tRNS', b'')
    def opacity(i):
        return alpha[i] if i < len(alpha) else 255
    opaque = sorted(i for i in set(pixels) if opacity(i))
    if len(opaque) > 255:
        raise ValueError('No room for reserved transparent index')
    mapping = {old: new + 1 for new, old in enumerate(opaque)}
    colors = b'\0\0\0' + b''.join(palette[i * 3:i * 3 + 3] for i in opaque)
    colors += bytes(768 - len(colors))
    converted = bytes(mapping.get(i, 0) for i in pixels)
    # Validate the remapping against every opaque pixel before writing the DOS asset.
    for old, new in zip(pixels, converted):
        if opacity(old) and palette[old * 3:old * 3 + 3] != colors[new * 3:new * 3 + 3]:
            raise ValueError('Lossy color remapping')
    pathlib.Path(target).parent.mkdir(parents=True, exist_ok=True)
    alphas = bytes([0] + [opacity(i) for i in opaque] + [0] * (255 - len(opaque)))
    pathlib.Path(target).write_bytes(b'MCATLAS2' + colors + converted + alphas)
    print(f'Atlas: {len(opaque)} visible palette entries; original RGB/alpha retained; SHA256={hashlib.sha256(png).hexdigest()}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('source')
    parser.add_argument('target')
    args = parser.parse_args()
    convert(args.source, args.target)
