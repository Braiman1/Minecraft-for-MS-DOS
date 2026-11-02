#!/usr/bin/env python3
"""Build either a real DJGPP DOS EXE or the host validation executable."""
import argparse
import os
import pathlib
import subprocess
from atlas import convert
from recipes import compile_recipes
from ui_assets import convert_ui

root = pathlib.Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser()
parser.add_argument('--host', action='store_true')
args = parser.parse_args()
out = root / 'build' / ('host' if args.host else 'dos')
out.mkdir(parents=True, exist_ok=True)
compile_recipes(root)
convert(root.parent / 'assets/terrain.png', out / 'ATLAS.DAT')
convert_ui(root,out)
(out / 'SPLASHES.TXT').write_bytes((root.parent / 'assets/title/splashes.txt').read_bytes())
compiler = os.environ.get('CXX', 'g++') if args.host else os.environ.get('DJGPP_PREFIX', 'i586-pc-msdosdjgpp-') + 'g++'
flags = ['-std=gnu++11', '-O2', '-Wall', '-Wextra', '-Wno-misleading-indentation', '-fno-exceptions', '-fno-rtti']
if not args.host:
    flags += ['-march=pentium', '-mtune=pentium', '-fno-toplevel-reorder', '-s', '-Wl,-Map,' + str(out / 'MCDOS.MAP')]
target = out / ('mcdos-host' if args.host else 'MCDOS.EXE')
subprocess.run([compiler, *flags, *[str(root / 'src' / f) for f in ['engine.cpp','progress.cpp','gui.cpp','main.cpp']], '-lm', '-o', str(target)], check=True)
if not args.host:
    # DJGPP stubify writes a lowercase .exe on case-sensitive build hosts.
    stubbed = target.with_suffix('.exe')
    if stubbed.exists():
        stubbed.replace(target)
print(target)
