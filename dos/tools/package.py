#!/usr/bin/env python3
"""Package the tested DOS build with its DPMI runtime and unchanged notices."""
import hashlib
import pathlib
import zipfile

root = pathlib.Path(__file__).resolve().parents[1]
build, dist = root / 'build/dos', root / 'dist'
dist.mkdir(exist_ok=True)
if hashlib.sha256((build / 'CWSDPMI.EXE').read_bytes()).hexdigest() != '2de899fecaa90632b8b9bdfc0305cb0375e59ae252c37e32d06c1ed3f98a8f44':
    raise ValueError('Unexpected CWSDPMI binary')
readme = '''MINECRAFT DOS - INITIAL PLAYABLE RECONSTRUCTION
Pentium, VGA, 6 MB RAM. Not a complete port of the Windows game.
Run PLAY.BAT. CWSDPMI -p -s- disables disk swapping.
WASD: move. Arrows/mouse: look. Space: jump.
X/left click: break. C/right click: place. 1-7: select block.
F5: save. Escape: save and exit. Mouse driver optional.
WORLD.SAV is a new DOS format; WORLD.BAK retains the previous save.
Finite world, no survival inventory/crafting/mobs/redstone/audio/network yet.
See dos/README.md in the source repository for limitations and validation.

CWSDPMI Copyright (C) 1995-2010 Charles W Sandmann.
Unmodified official binary; COPYING and COPYING.CWS included verbatim.
Complete corresponding source code:
https://github.com/jayschwa/cwsdpmi/tree/ed2b39b48f12de16fc01aa2415a6b3c5b9531abc/src
Author's distribution: http://sandmann.dotster.com/cwsdpmi/
'''
with zipfile.ZipFile(dist / 'MCDOS.ZIP', 'w', zipfile.ZIP_DEFLATED) as z:
    for name in ['MCDOS.EXE', 'ATLAS.DAT', 'CWSDPMI.EXE']:
        z.write(build / name, name)
    for name in ['COPYING', 'COPYING.CWS', 'CWSDPMI.DOC']:
        z.write(root / 'third_party/cwsdpmi' / name, name)
    z.writestr('PLAY.BAT', '@echo off\r\nCWSDPMI -p -s-\r\nMCDOS\r\n')
    z.writestr('README.TXT', readme.replace('\n', '\r\n'))
with zipfile.ZipFile(dist / 'MCDOS.ZIP') as z:
    assert z.testzip() is None
files = ['MCDOS.EXE', 'ATLAS.DAT', 'CWSDPMI.EXE']
(dist / 'SHA256SUMS').write_text(''.join(hashlib.sha256((build / f).read_bytes()).hexdigest() + '  ' + f + '\n' for f in files)
                              + hashlib.sha256((dist / 'MCDOS.ZIP').read_bytes()).hexdigest() + '  MCDOS.ZIP\n')
print(dist / 'MCDOS.ZIP')
