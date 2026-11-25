// FUN_overlay_23__02198e00 @ 0x02198e00 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198e00 @ 0x02198e00 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object, initialize base with forwarded parameters and install module dispatch.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_23__02198e00(unsigned int a,unsigned int b) { unsigned int *p=FUN_020ba894(212); if(p) { FUN_020352dc(p,a,b); p[0]=0x0219d6b8; } return p; }
