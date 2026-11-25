// FUN_overlay_31__0219c784 @ 0x0219c784 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c784 @ 0x0219c784 (code 0x36, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_31__0219c784(void) {
    FUN_02042960((void *)0x0219ccd8,0x19000);
    FUN_02042960((void *)0x0219ccd4,0x3000);
    FUN_02042960((void *)0x0219cce4,0x1e000);
    FUN_02042960((void *)0x0219cce0,0xa000);
    FUN_02042960((void *)0x0219ccdc,0x1000);
}
