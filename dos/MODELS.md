# Corrección de modelos y reloj

## Referencia inspeccionada

Se contrastaron las rutinas recuperadas de `ModelBiped` (VA `004a55de`), `ModelQuadruped` (`004a83d4`), `ModelChicken` (`004a6700`) y la construcción de cajas (`004a89b2`) del ejecutable `BetaPlusPlus.exe`. Su SHA-256 sigue siendo `d9c61755cdcf078dd0ec19bdbbc042a6d1977f9cb024d516573f7fef80f0e121`.

También se leyeron los valores binarios de las constantes: `0088f6d4`/`0088f7e8` son aproximadamente 0,6662; `0088f6e0`/`0088f7ec`, 1,4; `0088f7f0`, pi. Esas rutinas usan rotación alternada de las extremidades. No se presenta la reconstrucción como una traducción exacta de todo el modelo original.

## Fallos corregidos

- Las seis caras repetían un recorte de textura: ahora cada parte de entidad tiene una red UV distinta para frente, espalda, laterales y extremos, con dimensiones de piel.
- Brazos y patas se desplazaban: ahora giran alrededor de pivotes, con fases opuestas y amplitud que responde al desplazamiento. Los modelos no caminan continuamente cuando están quietos.
- Cada especie usaba el mismo torso: se separaron cerdo, vaca (incluidos cuernos), oveja (incluida capa de lana cuando no está esquilada) y gallina (incluidos pico y alas). Se corrigieron los miembros finos del esqueleto.
- Steve usa la piel original, capa de cabeza y cubos por extremidad; se corrigió el encuadre frontal del inventario.
- Se recortan triángulos contra el plano cercano, en lugar de descartar una parte completa cuando se acerca a la cámara.
- El brazo y el objeto sostenido acompañan el gesto de minado/ataque; los troncos y el césped sostenidos distinguen extremos y laterales.

Las vistas `MODEL0.png` a `MODEL6.png` de validation corresponden a cerdo, vaca, oveja, gallina, zombi, esqueleto y creeper. Son inspecciones visuales de esta implementación, no pruebas automáticas de equivalencia de píxeles con la versión Windows. La orientación de cabeza, animaciones específicas de combate, vuelo/caída y ciertas diferencias de geometría/UV todavía requieren continuar el contraste.

## Duración del día

El reloj del mundo está separado de los pasos limitados de física. Se alimenta del tiempo transcurrido de DOS (`uclock`) mientras se juega o se usa el inventario; se detiene en pausa. Ya no se pierde tiempo de cielo por recortar un cuadro lento a 250 ms.

Un ciclo tiene 1.200 segundos: día 600, atardecer 90, noche 420 y amanecer 90. Internamente son 60.000 unidades de 20 ms, equivalentes temporalmente a los 24.000 ticks de 50 ms de la referencia. El perfil `MCPROG03` guarda el reloj; admite leer perfiles previos `MCPROG02`, tomando su fase del contador anterior.

Las pruebas inyectan 1.200 segundos, comprueban fases y guardado, y repiten el avance a 1, 5 y 60 cuadros por segundo. No son una espera física de veinte minutos ni un benchmark de Pentium. La curva exacta del ángulo celeste y todos los efectos ambientales originales todavía no tienen equivalencia completa.
