// FUN_overlay_24__0219c040 @ 0x0219c040 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219c040 @ 0x0219c040 (code 0x14, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two module globals through reviewed word setter.
 * Field identities remain provisional.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_24__0219c040(void) { FUN_02042960((void *)0x0219c56c,0xcd); FUN_02042960((void *)0x0219c568,0x19a); }
