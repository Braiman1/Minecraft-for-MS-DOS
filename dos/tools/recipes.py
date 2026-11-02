"""Compile the versioned Beta recipe catalogue into a small static C++ registry."""
import json
import pathlib

def compile_recipes(root):
    catalogue = json.loads((root / 'data/recipes-beta-1.7.3.json').read_text())
    def ingredient(value):
        if isinstance(value, int):
            return value
        return value['id'] | ((value['data'] + 1) << 10)
    lines = ['// Generated from dos/data/recipes-beta-1.7.3.json; do not edit.', 'namespace mc { static const Recipe recipeTable[] = {']
    for recipe in catalogue['recipes']:
        cells = [0] * 9
        if recipe['kind'] == 'shaped':
            pattern = recipe['pattern']
            width, height = len(pattern[0]), len(pattern)
            assert 1 <= width <= 3 and 1 <= height <= 3
            assert all(len(row) == width for row in pattern)
            for y, row in enumerate(pattern):
                for x, key in enumerate(row):
                    cells[y * 3 + x] = ingredient(recipe['ingredients'][key]) if key != ' ' else 0
        else:
            width = height = 0
            assert len(recipe['ingredients']) <= 9
            for i, value in enumerate(recipe['ingredients']):
                cells[i] = ingredient(value)
        output = recipe['output']
        assert 0 < output['id'] < 360 and 0 < output['count'] <= 64
        lines.append('{{{' + ','.join(map(str, cells)) + '},' + ','.join(str(output[k]) for k in ['id']) + ',' + ','.join(map(str, [width,height,output['count'],output['data']])) + ',' + json.dumps(recipe['name']) + '},')
    lines.append('}; }')
    # One aggregate brace encloses the cells array, one the Recipe.
    text = '\n'.join(lines).replace('{{{', '{{') + '\n'
    (root / 'src/recipes.inc').write_text(text)
    print('Recipes:', len(catalogue['recipes']))

    records=json.loads((root / 'data/item-icons-beta-1.7.3.json').read_text())['items']
    icons=[0]*360;names=['']*360
    for item in records:
        icons[item['id']]=item['icon'];names[item['id']]=item['name']
    (root / 'src/item_info.inc').write_text('// Generated from recovered item constructor and en_US.lang.\nnamespace mc {\nstatic const unsigned char itemIcons[360]={'+','.join(map(str,icons))+'};\nstatic const char* const itemNames[360]={'+','.join(json.dumps(n) for n in names)+'};\n}\n')
