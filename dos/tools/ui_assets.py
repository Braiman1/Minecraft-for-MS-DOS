"""Prepare original GUI/skin assets for the DOS palette. Runtime needs no PNG decoder."""
import pathlib,struct
from PIL import Image

def convert_ui(root,out):
 assets=root.parent/'assets'
 palette=(out/'ATLAS.DAT').read_bytes()[8:776]
 colors=[tuple(palette[i:i+3]) for i in range(0,768,3)]
 files=['font/default.png','title/mclogo.png','gui/gui.png','gui/inventory.png','gui/crafting.png','gui/icons.png','gui/items.png','gui/background.png','mob/char.png','mob/pig.png','mob/cow.png','mob/sheep.png','mob/chicken.png']
 images=[Image.open(assets/f).convert('RGBA') for f in files]
 logo=Image.new('RGBA',(274,44));logo.alpha_composite(images[1].crop((0,0,155,44)),(0,0));logo.alpha_composite(images[1].crop((0,45,119,89)),(155,0));images[1]=logo
 for kind in range(4):
  skin=images[9+kind];sprite=Image.new('RGBA',(32,40))
  def piece(box,position,size):sprite.alpha_composite(skin.crop(box).resize(size,Image.Resampling.NEAREST),position)
  piece((28,14,36,26),(7,16),(18,16))
  piece((8,8,16,16),(6,1),(20,20))
  piece((4,20,8,32),(7,30),(6,10));piece((4,20,8,32),(20,30),(6,10))
  if kind==3:
   sprite=Image.new('RGBA',(32,40));sprite.alpha_composite(skin.crop((2,13,8,19)).resize((16,16)),(8,15));sprite.alpha_composite(skin.crop((2,3,6,9)).resize((12,18)),(10,0));sprite.alpha_composite(skin.crop((14,4,16,6)).resize((8,4)),(12,12))
  images.append(sprite)
 cache={}
 def color(pixel):
  r,g,b,a=pixel
  if a<128:return 0
  key=(r,g,b)
  if key not in cache:cache[key]=min(range(1,256),key=lambda i:sum((key[c]-colors[i][c])**2 for c in range(3)))
  return cache[key]
 images.extend(Image.open(assets/f).convert('RGBA') for f in ['mob/zombie.png','mob/skeleton.png','mob/creeper.png','terrain/sun.png','terrain/moon.png'])
 records=[];payload=bytearray()
 for image in images:
  data=bytes(color(p) for p in image.getdata());records.append(struct.pack('<HHI',image.width,image.height,len(data)));payload.extend(data)
 assert len(payload)<600000
 (out/'GUI.DAT').write_bytes(b'MCGUI001'+struct.pack('<I',len(images))+palette+b''.join(records)+payload)
 print('GUI assets:',len(images),'pixel bytes:',len(payload))
