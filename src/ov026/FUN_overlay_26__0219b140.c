// FUN_overlay_26__0219b140 @ 0x0219b140 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219b140 @ 0x0219b140 (code 0x1c, checked pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_26__0219b140(void) {
    FUN_02042960((void *)0x0219b690,0xaab);
    FUN_02042960((void *)0x0219b68c,0x333);
    FUN_02042960((void *)0x0219b688,0xf5c);
}
