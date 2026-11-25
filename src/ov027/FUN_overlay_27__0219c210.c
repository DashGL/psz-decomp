// FUN_overlay_27__0219c210 @ 0x0219c210 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219c210 @ 0x0219c210 (code 0x16, checked pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27, 2026-11-04: initialize two module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_27__0219c210(void) {
    FUN_02042960((void *)0x0219c83c,0x2ab);
    FUN_02042960((void *)0x0219c838,0x800);
}
