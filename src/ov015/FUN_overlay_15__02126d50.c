// FUN_overlay_15__02126d50 @ 0x02126d50 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02126d50 @ 0x02126d50 (code 0x1a, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Release global sprite descriptor and attach callback address to paired task.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135820(void *);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02126d50(void) {unsigned int **g=(unsigned int **)0x0213e7e0;FUN_overlay_15__02135820((void *)(*g)[22]);FUN_overlay_15__0213743c((void *)(*g)[23],(void *)0x02127759);}
