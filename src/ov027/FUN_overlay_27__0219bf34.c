// FUN_overlay_27__0219bf34 @ 0x0219bf34 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219bf34 @ 0x0219bf34 (code 0x36, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27, 2026-11-04: initialize 5 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_27__0219bf34(void) {
    FUN_02042960((void *)0x0219c288,0x3c000);
    FUN_02042960((void *)0x0219c298,0x258000);
    FUN_02042960((void *)0x0219c294,0x384000);
    FUN_02042960((void *)0x0219c290,0x4b000);
    FUN_02042960((void *)0x0219c28c,0xe1000);
}
