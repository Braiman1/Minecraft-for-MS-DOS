#!/usr/bin/env python3
"""Run fresh DOS tests; DOSBox's exit code alone does not establish game success."""
import argparse
import os
import pathlib
import subprocess

root = pathlib.Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser()
parser.add_argument('--docker-image', help='Existing local image containing dosbox')
args = parser.parse_args()
game, config = root / 'build/dos', root / 'tests/dosbox.conf'
for name in ['RESULT.TXT', 'SMOKE.TXT', 'EXIT.TXT', 'FRAME.PPM', 'VGA.PPM']:
    (game / name).unlink(missing_ok=True)
environment = dict(os.environ, SDL_VIDEODRIVER='dummy', SDL_AUDIODRIVER='dummy')
if args.docker_image:
    for key in ['DOCKER_HOST', 'DOCKER_CONTEXT', 'DOCKER_TLS', 'DOCKER_TLS_VERIFY', 'DOCKER_CERT_PATH']:
        environment.pop(key, None)
    command = ['docker', '--host=unix:///var/run/docker.sock', 'run', '--rm', '--network', 'none',
               '--mount', f'type=bind,src={game},dst=/game',
               '--mount', f'type=bind,src={config},dst=/dosbox.conf,readonly',
               '--workdir', '/game', args.docker_image, 'dosbox', '-conf', '/dosbox.conf']
else:
    command = ['dosbox', '-conf', str(config)]
with (game / 'dosbox.log').open('w') as log:
    subprocess.run(command, cwd=game, env=environment, stdout=log, stderr=subprocess.STDOUT, check=True, timeout=90)
result, smoke = (game / 'RESULT.TXT').read_text(), (game / 'SMOKE.TXT').read_text()
assert 'CHECKS=25 FAILURES=0' in result, result
assert 'PLATFORM=DJGPP MS-DOS DPMI' in result, result
for expected in ['VIDEO_MODE=19', 'KEYBOARD_INSTALLED=1', 'FRAMES=4', 'VGA_READBACK_MISMATCHES=0']:
    assert expected in smoke, smoke
assert (game / 'EXIT.TXT').read_text().strip() == 'PASS'
assert (game / 'WORLD.SAV').stat().st_size == 524328
for name in ['FRAME.PPM', 'VGA.PPM']:
    assert (game / name).read_bytes().startswith(b'P6\n160 100\n255\n')
print(result + smoke + 'DOSBOX_6MB_NO_SWAP=PASS')
