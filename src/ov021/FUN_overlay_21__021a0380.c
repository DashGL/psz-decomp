// FUN_overlay_21__021a0380 @ 0x021a0380 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_21__021a0380 @ 0x021a0380 (code 0x40, checked pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_21__021a0380(void) {
    FUN_02042960((void *)0x021a1358,0x7000);
    FUN_02042960((void *)0x021a1354,0x1e000);
    FUN_02042960((void *)0x021a1350,0x7000);
    FUN_02042960((void *)0x021a134c,0x11000);
    FUN_02042960((void *)0x021a1348,0x800);
    FUN_02042960((void *)0x021a1344,0x19000);
}
