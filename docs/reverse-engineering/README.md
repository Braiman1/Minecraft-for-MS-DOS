# Ingeniería inversa de BetaPlusPlus.exe

Objetivo del usuario: portar su recreación C++ a MS-DOS, Pentium, VGA y 6 MB de RAM, preservando texturas y mecánicas en la medida que las mediciones lo permitan.

## Resultado de las pasadas ejecutadas

Se exportaron **11.774 cuerpos de función únicos**: 9.945 en la primera pasada, 1 recuperado al ampliar el tiempo de descompilación y 1.828 adicionales desde candidatos de tablas virtuales. Quedan 265 funciones de redirección de la primera pasada sin cuerpo independiente exportado. Tres entradas candidatas apuntan al interior de otras funciones y no se forzó su separación. No quedan intentos fallidos sin resolver en estas pasadas; esto no elimina las advertencias ni demuestra corrección semántica o cobertura de todo el código del binario.

Se recuperaron 610 nombres de tipos y 537 tablas virtuales candidatas correspondientes a 518 clases. De 3.559 direcciones únicas de métodos virtuales candidatos, 3.556 tienen pseudocódigo exportado. Las 12.772 entradas de las tablas se contrastaron con los bytes originales del PE.

## Qué contiene este análisis

- `recovered-pseudocode.c`: conjunto combinado de las tres pasadas; es el punto de entrada para leer el código.
- `function-coverage.tsv` y `final-summary.json`: estados combinados, resolución de reintentos y cifras finales.
- `all-decompiled.c`: pseudocódigo producido por Ghidra. No es el C++ original ni una unidad compilable.
- `functions.tsv`: direcciones, nombres disponibles y estado de cada función intentada. Los nombres `FUN_...` son generados.
- `virtual-methods-extra.c`, `virtual-method-status.tsv` y `retries/`: exportaciones adicionales y resultados de reintentos.
- `subsystem-anchors.tsv`: pistas por cadenas para ubicar inicio, audio, chunks, renderizado, inventario y red; la clasificación es heurística.
- `calls.tsv`: llamadas estáticas identificadas en la primera pasada; las llamadas indirectas y virtuales pueden faltar.
- `string-references.tsv`: cadenas y referencias desde funciones; útil para ubicar carga de mundos, renderizado, errores y audio.
- `recovered-type-names.tsv`: nombres recuperados de cadenas de RTTI, usando el demangler de GNU. No recupera las declaraciones de clases.
- `candidate-vtable-methods.tsv`: relaciones candidatas entre clases y métodos virtuales según el ABI Itanium. Los slots no identifican el nombre original del método. Los métodos compartidos aparecen en varias clases; la detección exige al menos un puntero consecutivo a código y puede omitir tablas o terminarlas antes de tiempo.
- `by-class/` y `classes.tsv`: agrupación del pseudocódigo por esas relaciones candidatas; no equivale a reconstruir clases compilables.
- `binary-info.json`: encabezados y hash SHA-256 del ejecutable original.
- `textures.tsv`: dimensiones de PNG y estimaciones de bytes de píxeles sin compresión, sin mipmaps ni estructuras auxiliares.
- `analysis.log`, `headless.log`, `export.log` y resúmenes: evidencia y limitaciones del análisis automático.

Los desensamblados de muestra en `validation/` permiten cotejar operaciones de chunks e inventario con el pseudocódigo. No constituyen una prueba completa de equivalencia.

El proyecto editable de Ghidra se conserva en el entorno de análisis, en `/workspace/reverse-engineering/projects/BetaPlusPlus.gpr`; no se añade la base de datos binaria a Git. La herramienta está en `/workspace/tools/ghidra_12.2_PUBLIC`; requiere el JDK 25 instalado en `/workspace/tools/jdk-25.0.5.0.3`. El script `/workspace/reverse-engineering/reanalyze.sh`, conservado en el entorno original, vuelve a exportar un proyecto ya analizado y regenera los índices. Las fuentes de los exportadores están incluidas aquí en `scripts/`. No ejecuta el juego.

## Límites y evidencia técnica

El ejecutable es PE32 x86 de Windows; presenta indicios de GCC/MinGW, RTTI de C++, SDL2 y OpenGL. No contiene información DWARF/PDB aprovechable según el análisis de Ghidra. El tamaño del archivo es 6.425.088 bytes; no representa su consumo de RAM.

El tamaño virtual de imagen declarado es 17.367.040 bytes (16,56 MiB). La sección `.bss` declara 10.919.396 bytes (10,41 MiB), por sí sola por encima del objetivo de 6 MB. Estas reservas pertenecen a este binario y sus bibliotecas; no prueban que una implementación DOS optimizada necesite lo mismo. Hay que identificar qué reservas son prescindibles y qué algoritmos/estructuras deben cambiarse.

Las 77 texturas PNG bajo `assets` suman 6.385.920 bytes si se expanden todas a RGBA de 32 bits, o 1.596.480 bytes a índices de 8 bits (sin contar paletas). Una conversión a paleta VGA puede cambiar colores; preservar exactamente todos los colores depende del contenido y del modo gráfico. No se modificaron texturas ni recursos.

Los recursos de audio ocupan aproximadamente 20 MB en disco. Su tamaño comprimido no establece consumo en RAM; la viabilidad exige estudiar streaming, decodificación y dispositivo de sonido. No se ha elegido ni implementado un backend DOS.

La ejecución de referencia con Wine32 no funciona en este host: los cargadores `wine` y `wineserver32` terminan con `Exec format error`. Xvfb sí respondió. No se validaron el juego, equivalencia de comportamiento ni uso de memoria mediante ejecución.

Ghidra puede interpretar datos como código, estimar firmas incorrectas y perder estructura de control. Se deben revisar advertencias, fallos y el ensamblado original antes de implementar lógica recuperada. Los resultados no demuestran autoría o procedencia del programa; se analiza el binario proporcionado por el usuario.

## Para convertir esto en un port

El siguiente trabajo es reconstruir módulos compilables, verificar las estructuras y llamadas, sustituir Windows/SDL2/OpenGL por una plataforma DOS y medir la memoria con un límite real de 6 MB. Una base posible a evaluar es C++ de 32 bits con DPMI y un rasterizador software para VGA, pero no se ha instalado ni validado aquí ese toolchain. El resultado actual es ingeniería inversa estática, no un port DOS terminado.
