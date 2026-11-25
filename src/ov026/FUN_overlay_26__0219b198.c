// FUN_overlay_26__0219b198 @ 0x0219b198 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219b198 @ 0x0219b198 (code 0x20, checked pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_26__0219b198(void) {
    FUN_02042960((void *)0x0219b70c,0x9000);
    FUN_02042960((void *)0x0219b714,0xa4);
    FUN_02042960((void *)0x0219b710,0x1000);
}
