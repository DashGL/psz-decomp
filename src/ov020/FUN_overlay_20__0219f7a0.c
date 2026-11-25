// FUN_overlay_20__0219f7a0 @ 0x0219f7a0 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219f7a0 @ 0x0219f7a0 (code 0x36, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_20__0219f7a0(void) {
    FUN_02042960((void *)0x0219fed4,0x7800);
    FUN_02042960((void *)0x0219fed0,0xf000);
    FUN_02042960((void *)0x0219fecc,0x16000);
    FUN_02042960((void *)0x0219fec8,0x1e000);
    FUN_02042960((void *)0x0219fec4,0x2c000);
}
