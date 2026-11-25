// FUN_overlay_19__0219d000 @ 0x0219d000 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219d000 @ 0x0219d000 (code 0x24, checked pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19, 2026-11-04: initialize 4 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_19__0219d000(void) {
    FUN_02042960((void *)0x0219d474,0x0);
    FUN_02042960((void *)0x0219d470,0xffffe000);
    FUN_02042960((void *)0x0219d46c,0x222);
    FUN_02042960((void *)0x0219d468,0xfffffdde);
}
