// FUN_overlay_26__0219b1c4 @ 0x0219b1c4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219b1c4 @ 0x0219b1c4 (code 0x2c, checked pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: initialize 4 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_26__0219b1c4(void) {
    FUN_02042960((void *)0x0219b790,0x14000);
    FUN_02042960((void *)0x0219b79c,0x64000);
    FUN_02042960((void *)0x0219b798,0xe1000);
    FUN_02042960((void *)0x0219b794,0x64000);
}
