// FUN_overlay_15__02125a10 @ 0x02125a10 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02125a10 @ 0x02125a10 (code 0x22, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Release global display object and update task callback address.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135820(void *);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02125a10(void) {void ***g=(void ***)0x0213e7dc;FUN_overlay_15__02135820((*g)[69]);FUN_overlay_15__0213743c((*g)[70],(void *)0x02126909);}
