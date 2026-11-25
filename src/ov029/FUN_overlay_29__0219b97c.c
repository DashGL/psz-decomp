// FUN_overlay_29__0219b97c @ 0x0219b97c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b97c @ 0x0219b97c (code 0x14, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two module globals through reviewed word setter.
 * Field identities remain provisional.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_29__0219b97c(void) { FUN_02042960((void *)0x0219bc38,0xf85); FUN_02042960((void *)0x0219bc3c,0xa4); }
