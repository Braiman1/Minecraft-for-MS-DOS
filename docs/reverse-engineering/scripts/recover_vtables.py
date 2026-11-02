#!/usr/bin/env python3
"""Recover candidate Itanium ABI RTTI/vtables; labels are hypotheses, not source declarations."""
import pathlib,struct,csv,collections
src=pathlib.Path('/workspace/Minecraft-for-MS-DOS/BetaPlusPlus.exe')
out=pathlib.Path('/workspace/reverse-engineering/BetaPlusPlus')
b=src.read_bytes(); pe=struct.unpack_from('<I',b,0x3c)[0]; opt=pe+24; base=struct.unpack_from('<I',b,opt+28)[0]; n=struct.unpack_from('<H',b,pe+6)[0]; osz=struct.unpack_from('<H',b,pe+20)[0]
sections=[]
for i in range(n):
 pos=opt+osz+40*i; name=b[pos:pos+8].split(b'\0')[0].decode(); vs,rva,size,off=struct.unpack_from('<IIII',b,pos+8); flags=struct.unpack_from('<I',b,pos+36)[0];sections.append((name,base+rva,vs,off,size,flags))
def vaoff(va):
 for name,start,vs,off,size,flags in sections:
  if start<=va<start+size:return off+va-start
 return None
def executable(va):return any(start<=va<start+vs and flags&0x20000000 for _,start,vs,_,_,flags in sections)
def readword(va):
 p=vaoff(va)
 return struct.unpack_from('<I',b,p)[0] if p is not None and p+4<=len(b) else None
with (out/'recovered-type-names.tsv').open() as f: types={r['encoded']:r['demangled'] for r in csv.DictReader(f,delimiter='\t')}
name_addrs={}
for name,start,vs,off,size,flags in sections:
 if name not in ('.rdata','.data'):continue
 data=b[off:off+size]
 for encoded,decoded in types.items():
  for prefix in ('','*'):
   needle=(prefix+encoded).encode()+b'\0'; at=data.find(needle)
   while at>=0:
    if at==0 or data[at-1]==0:name_addrs[start+at]=decoded
    at=data.find(needle,at+1)
refs=collections.defaultdict(list)
for name,start,vs,off,size,flags in sections:
 if name not in ('.rdata','.data'):continue
 for delta in range(0,size-3,4):refs[struct.unpack_from('<I',b,off+delta)[0]].append(start+delta)
rtti={}
for nameaddr,label in name_addrs.items():
 for ref in refs.get(nameaddr,[]):
  typeinfo=ref-4
  if vaoff(readword(typeinfo) or 0) is not None:rtti[typeinfo]=label
rows=[]; classes=set(); tables=0
for typeinfo,label in rtti.items():
 for ref in refs.get(typeinfo,[]):
  raw=readword(ref-4)
  if raw is None:continue
  top=struct.unpack('<i',struct.pack('<I',raw))[0]
  if top>0 or top< -65536:continue
  methods=[]
  for slot in range(1024):
   method=readword(ref+4+slot*4)
   if not method or not executable(method):break
   methods.append(method)
  if not methods:continue
  tables+=1;classes.add(label)
  for slot,method in enumerate(methods): rows.append((label,f'{typeinfo:08x}',f'{ref+4:08x}',top,slot,f'{method:08x}'))
with (out/'candidate-vtable-methods.tsv').open('w') as f:
 w=csv.writer(f,delimiter='\t');w.writerow(['type_name','typeinfo_address','vtable_address','offset_to_top','virtual_slot','function_address']);w.writerows(rows)
print(f'RTTI objects: {len(rtti)}; candidate vtables: {tables}; classes: {len(classes)}; virtual entries: {len(rows)}; unique methods: {len(set(x[-1] for x in rows))}')
