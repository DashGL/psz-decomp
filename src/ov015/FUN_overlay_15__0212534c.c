// FUN_overlay_15__0212534c @ 0x0212534c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212534c @ 0x0212534c (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize selector only when global state output is one.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02127dfc(unsigned int *,unsigned int *);
extern void FUN_overlay_15__02124df4(unsigned int);
void FUN_overlay_15__0212534c(unsigned int selector) {unsigned int state;FUN_overlay_15__02127dfc(0,&state);if(state==1)FUN_overlay_15__02124df4(selector);}
