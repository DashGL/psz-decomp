// FUN_overlay_31__0219c710 @ 0x0219c710 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c710 @ 0x0219c710 (code 0x18, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize module three-word record and separate zero word.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int),FUN_02042960(void *,unsigned int);
void FUN_overlay_31__0219c710(void) { FUN_02035408((void *)0x0219cc10,0,0xc31,0); FUN_02042960((void *)0x0219cc0c,0); }
