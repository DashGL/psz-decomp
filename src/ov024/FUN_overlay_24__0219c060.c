// FUN_overlay_24__0219c060 @ 0x0219c060 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219c060 @ 0x0219c060 (code 0x2c, checked pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: initialize 4 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_24__0219c060(void) {
    FUN_02042960((void *)0x0219c5e8,0x4000);
    FUN_02042960((void *)0x0219c5f8,0x19000);
    FUN_02042960((void *)0x0219c5f4,0x64000);
    FUN_02042960((void *)0x0219c5f0,0x64000);
}
