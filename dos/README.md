# Minecraft DOS: interfaz Beta y supervivencia básica

Objetivo: **Beta 1.7.3, Pentium, VGA y 6 MB de RAM**. Esta rama reconstruye funcionalidades a partir del ejecutable y recursos del repositorio; no es una recuperación exacta de todas las fuentes ni un port completo.

## Ejecutar

Extrae `dos/dist/MCDOS.ZIP` en una carpeta y ejecuta `PLAY.BAT`. Incluye CWSDPMI y las licencias originales. El lanzador usa `CWSDPMI -p -s-`, sin intercambio en disco.

Se inicia en el menú gráfico de referencia, con Singleplayer, Multiplayer, Mods and Texture Packs y Options. Flechas/Tab y Enter permiten navegar; también se admite ratón si hay un controlador DOS instalado.

En **Singleplayer** hay tres espacios para crear, jugar, renombrar y eliminar mundos. El nombre admite 24 caracteres ASCII. Los mundos son finitos, de 64×128×64 bloques, con semillas deterministas distintas por espacio; todavía no hay editor de semillas ni generación equivalente a la del ejecutable Windows.

## Controles y juego

- WASD: caminar. Flechas o ratón: mirar. Espacio: saltar.
- X o botón izquierdo mantenido: romper bloques con tiempo de minado; atacar animales.
- C o botón derecho: colocar, abrir la mesa de crafteo, esquilar una oveja con tijeras u ordeñar una vaca con cubo.
- E: inventario de 36 espacios y crafteo 2×2. Una mesa colocada abre la cuadrícula 3×3.
- 1–9: seleccionar la barra rápida. R durante el juego: comer el alimento seleccionado.
- Inventario/crafteo: clic izquierdo mueve pilas, clic derecho divide o coloca una unidad; clic en el resultado lo toma con el cursor. Con teclado: Tab/flechas seleccionan, Enter mueve, R divide/coloca una unidad y C fabrica hacia el inventario.
- F5 guarda. Escape pausa; **Save and quit to title** guarda y vuelve al menú.

La vida comienza en veinte puntos (diez corazones). Hay daño por caída, comida que recupera vida y una pantalla de muerte con reaparición. Al reaparecer se vacía el inventario; aún no existen entidades de objetos en el suelo para recuperar los objetos perdidos.

**Beta 1.7.3 no tiene barra de hambre.** La comida recupera vida directamente. Se conservan límites antiguos: comida de una unidad, galletas de ocho y huevos/bolas de nieve de dieciséis. Las herramientas tienen desgaste; la velocidad de minado distingue materiales y herramientas, aunque no todas las propiedades de bloques están portadas.

Los cerdos, vacas, ovejas y gallinas tienen vida, deambulan y pueden soltar recursos hacia el inventario. Las ovejas recuerdan si fueron esquiladas. Son sprites con oclusión por profundidad; **todavía no son los modelos 3D y animaciones originales**. Tampoco hay reproducción: esa mecánica no pertenecía a Beta 1.7.3.

El inventario usa los recursos originales de interfaz y la skin de Steve; el juego dibuja su brazo. Steve en el inventario es una composición frontal de la skin, no el modelo 3D interactivo original. Las ranuras de armadura se ven en la textura de referencia, pero equipar armadura todavía no está implementado.

## Crafteos, logros y estadísticas

El catálogo versionado está en [data/recipes-beta-1.7.3.json](data/recipes-beta-1.7.3.json); [RECIPES.md](RECIPES.md) lo muestra de forma legible. Contiene 151 registros reconstruidos y se compila a una tabla C++ estática. El comprobador admite desplazamiento, reflejo, metadatos y recetas sin forma. Consume cantidades, respeta límites de pila y devuelve los cubos vacíos de una tarta.

Esto **no significa que todas las recetas se hayan verificado individualmente ni que todos los ingredientes sean obtenibles en esta generación de mundo**. Por ejemplo, aún faltan minería de minerales, fundición, cultivos, pesca y otras fuentes de materiales. Las recetas, sus fuentes y las correcciones comprobadas están documentadas para continuar el trabajo sin sustituirlas por reglas modernas.

Una comprobación directa en `BetaPlusPlus.exe`, VA `004c20a2`, corrigió la sopa de hongos: se fabrica con dos patrones verticales, no con la receta moderna sin forma. El mismo constructor confirma galletas con cacao de metadato 3 y salida de ocho. Los 104 iconos de objetos y sus nombres se recuperaron del constructor y `en_US.lang`; véase [data/item-icons-beta-1.7.3.json](data/item-icons-beta-1.7.3.json).

La pausa abre las pantallas de **16 logros** y **estadísticas**. Se guardan requisitos previos, contadores de tiempo simulado, distancia recorrida, saltos, muertes, daño, animales eliminados, bloques minados/colocados y objetos fabricados, además de contadores por objeto. Los logros que necesitan funciones todavía no portadas permanecen bloqueados; mostrar el árbol no implica que todos sean alcanzables.

## Opciones y texturas

Se guardan distancia visual (8/16/24 bloques), sensibilidad, inversión del ratón y selección de dificultad. La dificultad queda persistida, pero todavía no hay enemigos a los que aplicar sus reglas.

**Mods and Texture Packs** permite restaurar el atlas predeterminado o cargar `CUSTOM.DAT`, con formato `MCATLAS2` generado por `dos/tools/atlas.py`. Cambia el atlas y la paleta VGA. No carga paquetes ZIP ni mods. **Multiplayer** muestra explícitamente que aún no hay conexión de red.

Las imágenes de GUI/skins se preparan como `GUI.DAT` usando la paleta del atlas. VGA reduce la precisión a seis bits por canal; la conversión de GUI aproxima algunos colores y la transparencia parcial del terreno usa tramado. Los PNG originales permanecen intactos. No se ofrece equivalencia visual exacta.

## Guardados

- `WORLDS.DAT`: nombres y semillas de los tres espacios.
- `WORLD1.SAV`, `WORLD2.SAV`, `WORLD3.SAV`: bloques y posición del jugador; conserva formato de bloques del primer prototipo.
- `WORLD1.PLY`, etc.: inventario, vida, desgaste, cuadrícula pendiente, animales, logros y estadísticas, con checksum completo del registro.
- `.BAK`: copia anterior de bloques; `.PBK`: copia anterior del perfil. Un perfil corrupto intenta recuperar su `.PBK`; si ambos están corruptos se rechaza la carga del mundo.
- `OPTIONS.DAT`: opciones del usuario.

Los dos archivos de cada mundo deben copiarse juntos para transportar el estado completo. Son guardados nuevos para DOS: no se importan todavía las partidas `.minecraft/*.mcr`, y el menú no importa automáticamente el `WORLD.SAV` único del prototipo anterior. No se sobrescriben esos archivos originales.

## Compilar y probar

Requiere Python 3, Pillow y DJGPP GCC 12.2 de 64 bits para Linux. El runtime DOS no requiere Python ni Pillow.

```sh
python3 -m venv /tmp/mcdos-python
. /tmp/mcdos-python/bin/activate
python -m pip install -r dos/tools/requirements.txt
export DJGPP_PREFIX=/ruta/a/djgpp/bin/i586-pc-msdosdjgpp-
python dos/tools/build.py
python dos/tools/fetch_runtime.py
python dos/tools/build.py --host
(cd dos/build/host && ./mcdos-host --test)
```

El compilador es [build-djgpp v3.4](https://github.com/andrewwutw/build-djgpp/releases/tag/v3.4), `djgpp-linux64-gcc1220.tar.bz2`, SHA-256 `8464f17017d6ab1b2bb2df4ed82357b5bf692e6e2b7fee37e315638f3d505f00`. Se usa `-march=pentium`, sin RTTI ni excepciones. [THIRD_PARTY.md](THIRD_PARTY.md) documenta CWSDPMI.

Para validar en DOSBox 0.74-3 instalado:

```sh
python dos/tests/run_dosbox.py
```

En el entorno cloud preparado, puede usarse `--docker-image minecraft-dos-test:local`. El runner borra resultados anteriores, ejecuta el EXE real con 6 MB totales y sin swap, comprueba resultados del motor y funcionalidades, dibuja cuatro cuadros VGA y compara la memoria de video. Las pruebas de guardado y menús trabajan en un directorio temporal propio, sin borrar mundos del jugador. `--smoke` escribe solamente `SMOKE.SAV/PLY`.

Después de validar, `python dos/tools/package.py` prepara el ZIP completo. Los resultados, hashes y capturas de esta compilación están en [validation](validation/). Se comprobó en emulación; **no hay todavía una medición en Pentium físico ni una instalación real de MS-DOS 6.22**. Instalar la IRQ del teclado no prueba por sí solo pulsaciones físicas de todos los dispositivos.

## Trabajo pendiente

Se mantienen pendientes los modelos/animaciones originales de animales y Steve, armadura funcional, objetos tirados, enemigos/combate completo, minerales, fundición, cultivos, iluminación completa, agua/lava, ciclos de día/noche, redstone, audio original, red, carga de mods, paquetes completos de texturas y compatibilidad con mundos Windows. El catálogo de recetas y las pantallas son una base para continuar ese port, no evidencia de que esos sistemas ya funcionen.
