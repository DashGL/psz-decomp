// FUN_overlay_20__0219f558 @ 0x0219f558 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219f558 @ 0x0219f558 (code 0x3e, checked pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_20__0219f558(void) {
    FUN_02042960((void *)0x0219fd90,0x7800);
    FUN_02042960((void *)0x0219fd8c,0xf000);
    FUN_02042960((void *)0x0219fd88,0x16000);
    FUN_02042960((void *)0x0219fd84,0x1e000);
    FUN_02042960((void *)0x0219fd80,0x2c000);
    FUN_02042960((void *)0x0219fd78,0x533);
}
