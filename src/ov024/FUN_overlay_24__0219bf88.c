// FUN_overlay_24__0219bf88 @ 0x0219bf88 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219bf88 @ 0x0219bf88 (code 0x34, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_24__0219bf88(void) {
    FUN_02042960((void *)0x0219c304,0x3000);
    FUN_02042960((void *)0x0219c300,0x5000);
    FUN_02042960((void *)0x0219c2fc,0x4000);
    FUN_02042960((void *)0x0219c2f8,0x9000);
    FUN_02042960((void *)0x0219c2f4,0xb33);
}
