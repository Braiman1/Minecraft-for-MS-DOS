# Minecraft-for-MS-DOS

Recreación en proceso de adaptación a **MS-DOS, Pentium, VGA y 6 MB de RAM**.

La rama DOS incluye una primera reconstrucción C++ jugable: movimiento, colisiones, salto, terreno finito, texturas del atlas existente, romper/colocar bloques y guardado. Se compila con DJGPP a un ejecutable DOS real; no requiere Windows, Java, SDL ni OpenGL.

- [Ejecutar, compilar, controles y mecánicas pendientes](dos/README.md)
- [Análisis del ejecutable original y pseudocódigo recuperado](docs/reverse-engineering/README.md)
- [Paquete DOS](dos/dist/MCDOS.ZIP) — incluye el servidor CWSDPMI y `PLAY.BAT`.

**El port está incompleto:** todavía no conserva todas las mecánicas del ejecutable original. Las limitaciones y pruebas están documentadas en el directorio `dos`. `BetaPlusPlus.exe` sigue siendo la versión Windows de referencia.
