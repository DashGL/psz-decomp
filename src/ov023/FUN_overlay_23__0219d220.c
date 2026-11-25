// FUN_overlay_23__0219d220 @ 0x0219d220 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219d220 @ 0x0219d220 (code 0x18, checked pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: initialize two module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_23__0219d220(void) {
    FUN_02042960((void *)0x0219d9f8,0x1800);
    FUN_02042960((void *)0x0219d9f4,0x7800);
}
