// FUN_overlay_15__02125570 @ 0x02125570 (code 0x24, pool extent 0x28, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Release up to four global display objects and clear their slots.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135820(void *);
void FUN_overlay_15__02125570(void) {void ***g=(void ***)0x0213e7d0;int i;for(i=0;i<4;i++){void *p=(*g)[i];if(p){FUN_overlay_15__02135820(p);(*g)[i]=0;}}}
