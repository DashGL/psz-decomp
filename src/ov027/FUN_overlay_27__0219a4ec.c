// FUN_overlay_27__0219a4ec @ 0x0219a4ec (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219a4ec @ 0x0219a4ec (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Clear local state then invoke owner operation.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_27__0219a4ec(unsigned int *p) { p[3]=0; FUN_02040c0c((void *)p[1],0,4,0x1000,0); }
