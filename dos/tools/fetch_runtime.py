#!/usr/bin/env python3
"""Fetch the pinned CWSDPMI binary embedded in DOSBox-X, with TLS and content verification."""
import hashlib
import pathlib
import re
import urllib.request

COMMIT = '66480b4a84c9adc8002f21b332da8f694a9978c4'
URL = f'https://raw.githubusercontent.com/joncampbell123/dosbox-x/{COMMIT}/src/builtin/cwsdpmi_exe.cpp'
DIGEST = '2de899fecaa90632b8b9bdfc0305cb0375e59ae252c37e32d06c1ed3f98a8f44'
root = pathlib.Path(__file__).resolve().parents[1]
out = root / 'build/dos/CWSDPMI.EXE'
if out.exists() and hashlib.sha256(out.read_bytes()).hexdigest() == DIGEST:
    print(out)
else:
    source = urllib.request.urlopen(URL, timeout=60).read().decode()
    array = source.split('bin_cwsdpmi_exe[] = {', 1)[1].split('};', 1)[0]
    binary = bytes(int(x, 16) for x in re.findall(r'0x([0-9a-fA-F]{2})', array))
    if hashlib.sha256(binary).hexdigest() != DIGEST:
        raise ValueError('CWSDPMI content checksum mismatch')
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(binary)
    print(out)
