#!/usr/bin/env python3
"""Index raw Ghidra output by candidate RTTI ownership without inventing source names."""
import pathlib,re,csv,json,collections
p=pathlib.Path('/workspace/reverse-engineering/BetaPlusPlus')
sources=[p/'all-decompiled.c']
if (p/'virtual-methods-extra.c').exists(): sources.append(p/'virtual-methods-extra.c')
sources.extend(sorted((p/'retries').glob('*.c')))
text='\n'.join(x.read_text() for x in sources)
(p/'recovered-pseudocode.c').write_text(text)
parts=re.split(r'(?=\n/\* ADDRESS: [0-9a-fA-F]+ NAME: )',text)
funcs={}
for part in parts:
 m=re.match(r'\n/\* ADDRESS: ([0-9a-fA-F]+) NAME: (.*?) \*/',part)
 if m:funcs[m[1].lower()]=part
rows=list(csv.DictReader((p/'candidate-vtable-methods.tsv').open(),delimiter='\t'))
byclass=collections.defaultdict(list)
for r in rows:byclass[r['type_name']].append(r)
folder=p/'by-class';folder.mkdir(exist_ok=True)
class_index=[]
for name,entries in sorted(byclass.items()):
 safe=re.sub('[^A-Za-z0-9_.-]','_',name)[:180]; path=folder/(safe+'.c'); seen=set();recovered=0
 with path.open('w') as f:
  f.write('/* Candidate RTTI class: '+name+'\n   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.\n   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */\n')
  for row in entries:
   addr=row['function_address']; f.write('\n/* vtable '+row['vtable_address']+' slot '+row['virtual_slot']+' address '+addr+' */\n')
   if addr in seen:f.write('/* Already included above. */\n');continue
   seen.add(addr)
   if addr in funcs:f.write(funcs[addr]);recovered+=1
   else:f.write('/* No matching successful function export. Inspect address in Ghidra. */\n')
 class_index.append((name,str(path.relative_to(p)),len(entries),len(seen),recovered))
with (p/'classes.tsv').open('w') as f:
 w=csv.writer(f,delimiter='\t');w.writerow(['candidate_class','file','vtable_entries','unique_methods','exported_methods']);w.writerows(class_index)
summary={'exported_function_bodies':len(funcs),'candidate_classes':len(byclass),'candidate_virtual_entries':len(rows),'candidate_unique_virtual_methods':len(set(x['function_address'] for x in rows)),'candidate_virtual_methods_with_export':len(set(x['function_address'] for x in rows)&funcs.keys())}
(p/'organization-summary.json').write_text(json.dumps(summary,indent=2)+'\n');print(json.dumps(summary,indent=2))
