// FUN_overlay_27__0219bffc @ 0x0219bffc (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219bffc @ 0x0219bffc (code 0x34, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_27__0219bffc(void) {
    FUN_02042960((void *)0x0219c378,0x2d000);
    FUN_02042960((void *)0x0219c360,0x1e000);
    FUN_02042960((void *)0x0219c374,0xc00);
    FUN_02042960((void *)0x0219c370,0xe66);
    FUN_02042960((void *)0x0219c36c,0x78000);
}
