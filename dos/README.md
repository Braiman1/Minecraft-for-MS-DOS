# Primera versión DOS

Esta es una reconstrucción jugable nueva del núcleo de bloques para **Pentium, VGA y 6 MB**, usando el atlas de texturas del repositorio. El formato de indexación de chunks se contrastó con el desensamblado de `BetaPlusPlus.exe`. El pseudocódigo recuperado sirve como referencia; no se presenta esta implementación como una recuperación exacta de las fuentes originales.

## Ejecutar en DOS

Extrae `MCDOS.ZIP` en una carpeta, entra en ella y ejecuta `PLAY.BAT`, o estos comandos:

```dos
CWSDPMI -p -s-
MCDOS
```

El parámetro `-s-` desactiva el archivo de intercambio. Se requiere un Pentium o posterior, VGA, DOS compatible y memoria extendida. El entorno emulado se verificó con 6 MB totales. No se ha medido todavía en un Pentium físico ni en una instalación real de MS-DOS 6.22.

- WASD: caminar; flechas: mirar; espacio: saltar.
- X: romper el bloque apuntado; C: colocar el seleccionado.
- 1–7: piedra, tierra, adoquín, tablas, arena, tronco y cristal.
- Ratón opcional, con un controlador DOS instalado: mirar, botón izquierdo para romper y derecho para colocar.
- F5: guardar. Escape: guardar y salir.

Los guardados se escriben en `WORLD.SAV`; el anterior se conserva en `WORLD.BAK`. No se sobrescriben las partidas originales `.minecraft`. Este formato propio no importa todavía mundos `.mcr` ni conserva un inventario de supervivencia.

## Alcance y límites

Incluye mundo determinista finito de 64×128×64 bloques, terreno y árboles sencillos, renderizado de voxels por software, colisiones, gravedad, salto, selección de bloques, romper/colocar y guardado con checksum. El render interno es 160×100, ampliado a VGA modo 13h de 320×200, con alcance visual de 24 bloques.

El atlas conserva los RGB y alpha originales en `ATLAS.DAT`. La salida VGA reduce la precisión de color a seis bits por canal; usa tramado para la transparencia parcial y una tabla de iluminación por cara. No implementa todavía tintado por bioma, todas las texturas de entidades ni equivalencia visual exacta. Los archivos PNG originales permanecen intactos.

**No es un port completo de todas las mecánicas.** Faltan inventario de supervivencia, crafteo, durabilidad/herramientas, criaturas/IA, iluminación por bloques, ciclos de día y noche, agua/lava, hornos, redstone, música/sonidos originales, multijugador y carga de los mundos existentes. El sonido actual se limita al aviso del PC speaker al guardar. La generación de terreno es nueva y no reproduce el generador del ejecutable original.

## Compilar

Requiere Python 3 (biblioteca estándar) y DJGPP GCC 12.2 para Linux de 64 bits:

```sh
export DJGPP_PREFIX=/ruta/a/djgpp/bin/i586-pc-msdosdjgpp-
python3 dos/tools/build.py
python3 dos/tools/fetch_runtime.py
```

El compilador usado está disponible en [build-djgpp v3.4](https://github.com/andrewwutw/build-djgpp/releases/tag/v3.4), archivo `djgpp-linux64-gcc1220.tar.bz2`. SHA-256 del archivo utilizado: `8464f17017d6ab1b2bb2df4ed82357b5bf692e6e2b7fee37e315638f3d505f00`. No se integra el toolchain en el repositorio. La compilación usa `-march=pentium`, sin RTTI ni excepciones C++.

La compilación produce `dos/build/dos/MCDOS.EXE` y `ATLAS.DAT`. `fetch_runtime.py` obtiene CWSDPMI desde una revisión fija de DOSBox-X y verifica su SHA-256. Véase [THIRD_PARTY.md](THIRD_PARTY.md).

## Validar

```sh
python3 dos/tools/build.py --host
cd dos/build/host
./mcdos-host --test
cat RESULT.TXT
```

Para repetir la prueba DOS, desde `dos/build/dos`, con DOSBox 0.74-3 instalado:

```sh
dosbox -conf ../../tests/dosbox.conf
```

Revisa `RESULT.TXT`, `SMOKE.TXT` y `EXIT.TXT` de esa ejecución. La prueba `--test` comprueba terreno, límites, colisiones, salto/aterrizaje, selección de bloques, romper/colocar, rechazo de colocación dentro del jugador y guardado/recuperación/rechazo de corrupción. `--smoke` instala/restaura la IRQ del teclado, establece VGA, dibuja cuatro cuadros, compara los 64.000 bytes de VRAM con el framebuffer, guarda el mundo y sale. No simula pulsaciones físicas de teclado o ratón.

El objeto del juego ocupa 607.648 bytes: mundo 524.288, atlas 65.536, framebuffer interno 16.000, paleta, alpha, tablas de sombreado y estado. El framebuffer VGA añade 64.000 bytes. Estas cifras no incluyen código, pila, biblioteca C, DOS o DPMI. El total se verifica ejecutando el programa en el entorno limitado; no se deduce solo de estas sumas. Los resultados de esta máquina están en [validation](validation/).
