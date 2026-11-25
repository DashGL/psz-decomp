// FUN_overlay_27__0219a240 @ 0x0219a240 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219a240 @ 0x0219a240 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Set owner option and child flag then clear child bit two.
 * Field identities remain provisional.
 */
extern void FUN_020445a8(void *,unsigned int,unsigned int);
void FUN_overlay_27__0219a240(void **p) { unsigned int *child; FUN_020445a8(p[1],0,1); child=p[2]; child[21]=1; child[23]&=~4U; }
