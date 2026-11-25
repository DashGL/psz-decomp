// FUN_overlay_20__0219f674 @ 0x0219f674 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219f674 @ 0x0219f674 (code 0x34, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_20__0219f674(void) {
    FUN_02042960((void *)0x0219fe2c,0x96000);
    FUN_02042960((void *)0x0219fe28,0xa800);
    FUN_02042960((void *)0x0219fe24,0x666);
    FUN_02042960((void *)0x0219fe20,0x7800);
    FUN_02042960((void *)0x0219fe30,0x800);
}
