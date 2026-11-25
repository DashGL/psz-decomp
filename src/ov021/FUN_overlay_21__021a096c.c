// FUN_overlay_21__021a096c @ 0x021a096c (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_21__021a096c @ 0x021a096c (code 0x40, checked pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_21__021a096c(void) {
    FUN_02042960((void *)0x021a1698,0x7000);
    FUN_02042960((void *)0x021a1694,0x1e000);
    FUN_02042960((void *)0x021a1690,0x7000);
    FUN_02042960((void *)0x021a168c,0x11000);
    FUN_02042960((void *)0x021a1688,0x800);
    FUN_02042960((void *)0x021a1684,0x19000);
}
