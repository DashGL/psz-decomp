// FUN_overlay_19__0219cf70 @ 0x0219cf70 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219cf70 @ 0x0219cf70 (code 0x32, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_19__0219cf70(void) {
    FUN_02042960((void *)0x0219d35c,0x46000);
    FUN_02042960((void *)0x0219d36c,0xb4000);
    FUN_02042960((void *)0x0219d368,0x0);
    FUN_02042960((void *)0x0219d364,0x800);
    FUN_02042960((void *)0x0219d360,0xb33);
}
