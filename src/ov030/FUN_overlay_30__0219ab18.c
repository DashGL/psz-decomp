// FUN_overlay_30__0219ab18 @ 0x0219ab18 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219ab18 @ 0x0219ab18 (code 0x28, checked pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30, 2026-11-04: initialize 4 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_30__0219ab18(void) {
    FUN_02042960((void *)0x0219adb8,0x19a);
    FUN_02042960((void *)0x0219adb4,0x4000);
    FUN_02042960((void *)0x0219adb0,0x266);
    FUN_02042960((void *)0x0219adac,0x4000);
}
