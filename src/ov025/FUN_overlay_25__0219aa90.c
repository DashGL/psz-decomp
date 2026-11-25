// FUN_overlay_25__0219aa90 @ 0x0219aa90 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_25__0219aa90 @ 0x0219aa90 (code 0x3e, checked pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_25__0219aa90(void) {
    FUN_02042960((void *)0x0219ae14,0x5000);
    FUN_02042960((void *)0x0219ae28,0x19000);
    FUN_02042960((void *)0x0219ae24,0x3000);
    FUN_02042960((void *)0x0219ae20,0x200);
    FUN_02042960((void *)0x0219ae1c,0x400);
    FUN_02042960((void *)0x0219ae18,0x80);
}
