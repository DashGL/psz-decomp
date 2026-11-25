// FUN_overlay_29__0219b9c4 @ 0x0219b9c4 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b9c4 @ 0x0219b9c4 (code 0x3a, checked pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_29__0219b9c4(void) {
    FUN_02042960((void *)0x0219bdd4,0x222);
    FUN_02042960((void *)0x0219bdd0,0x4cd);
    FUN_02042960((void *)0x0219bdcc,0x333);
    FUN_02042960((void *)0x0219bdc8,0x800);
    FUN_02042960((void *)0x0219bdc4,0x2000);
    FUN_02042960((void *)0x0219bdc0,0x28000);
}
