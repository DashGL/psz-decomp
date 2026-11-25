// FUN_overlay_24__0219c020 @ 0x0219c020 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219c020 @ 0x0219c020 (code 0x18, checked pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: initialize two module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_24__0219c020(void) {
    FUN_02042960((void *)0x0219c4bc,0x1e000);
    FUN_02042960((void *)0x0219c4b8,0x4b000);
}
