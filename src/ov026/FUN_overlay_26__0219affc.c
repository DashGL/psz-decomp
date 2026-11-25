// FUN_overlay_26__0219affc @ 0x0219affc (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219affc @ 0x0219affc (code 0x1e, checked pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_26__0219affc(void) {
    FUN_02042960((void *)0x0219b37c,0x0);
    FUN_02042960((void *)0x0219b378,0xf000);
    FUN_02042960((void *)0x0219b374,0x2333);
}
