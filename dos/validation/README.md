# Validación de esta compilación

Se ejecutó DOSBox 0.74-3, CPU `pentium_slow`, núcleo normal, 50.000 ciclos configurados, VGA y **6 MB de memoria total emulada**. CWSDPMI se cargó con `-p -s-`, sin intercambio en disco. Los resultados fueron generados después de compilar el ejecutable identificado por los hashes de `MANIFEST.json`.

- `RESULT.TXT`: 25 comprobaciones, 0 fallos; incluye memoria física disponible observada por DPMI.
- `SMOKE.TXT`: modo VGA 19 decimal (13h), IRQ de teclado instalada, cuatro cuadros y 0 diferencias al leer 64.000 bytes de VRAM por cuadro.
- `FRAME.PPM`: imagen producida por las pruebas del motor.
- `VGA.PPM`: imagen del motor durante la prueba de video. La correspondencia de píxeles con VRAM se verificó por separado; el PPM usa la paleta de origen de ocho bits, mientras el DAC VGA usa seis bits.
- `SIZE.TXT`: secciones del ejecutable DOS; no representa por sí solo el uso total de RAM.

La lectura de VRAM valida la copia de video, no el resultado visual de un monitor físico. La instalación de la IRQ no prueba pulsaciones físicas. El tiempo de cuatro cuadros en `SMOKE.TXT` pertenece al emulador, no es una medición de FPS de un Pentium real. No se ha ejecutado en hardware físico o MS-DOS 6.22 instalado.
