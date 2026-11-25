// FUN_overlay_17__021240a8 @ 0x021240a8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__021240a8 @ 0x021240a8 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table and free sixteen optional owned buffers.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
void *FUN_overlay_17__021240a8(unsigned int *p) {int i;p[0]=0x021269ac;for(i=0;i<16;i++)if(p[35+i]) {FUN_020ba8c4((void *)p[35+i]);p[35+i]=0;}return p;}
