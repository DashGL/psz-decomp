// FUN_overlay_28__0219bda4 @ 0x0219bda4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219bda4 @ 0x0219bda4 (code 0x20, checked pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_28__0219bda4(void) {
    FUN_02042960((void *)0x0219c3d0,0x333);
    FUN_02042960((void *)0x0219c3cc,0x800);
    FUN_02042960((void *)0x0219c3c8,0x3c000);
}
