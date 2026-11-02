# Minecraft-for-MS-DOS

Recreación en proceso de adaptación a **MS-DOS, Pentium, VGA y 6 MB de RAM**, tomando Beta 1.7.3 como referencia.

La rama DOS incluye menú gráfico de referencia, tres espacios de mundo, inventario y crafteo 2×2/3×3, vida y supervivencia básica, animales básicos, Steve en el inventario, logros y estadísticas guardados por mundo. Se compila con DJGPP a un ejecutable DOS real; no requiere Windows, Java, SDL ni OpenGL.

- [Descargar paquete DOS completo](dos/dist/MCDOS.ZIP): extraer y ejecutar `PLAY.BAT`.
- [Controles, compilación, funciones y limitaciones](dos/README.md).
- [151 recetas reconstruidas y evidencia](dos/RECIPES.md).
- [Validación y capturas con 6 MB](dos/validation/).
- [Análisis y pseudocódigo de referencia](docs/reverse-engineering/README.md).

**El port sigue incompleto.** Los animales usan sprites, no los modelos 3D originales; hay sistemas de supervivencia y comportamiento de bloques pendientes. Multiplayer y carga de mods aún no funcionan. La documentación distingue el catálogo y las pantallas de las funciones efectivamente portadas. `BetaPlusPlus.exe` permanece intacto como referencia Windows.
