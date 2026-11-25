// FUN_overlay_24__02198e08 @ 0x02198e08 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198e08 @ 0x02198e08 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Update first owner flag only for selector zero.
 * Field identities remain provisional.
 */
void FUN_overlay_24__02198e08(char *p,int selector) { if(selector==0) *(unsigned int *)(p+0xd4)&=~1U; }
