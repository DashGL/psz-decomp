// FUN_overlay_23__0219d264 @ 0x0219d264 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219d264 @ 0x0219d264 (code 0x40, checked pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_23__0219d264(void) {
    FUN_02042960((void *)0x0219da50,0xf0000);
    FUN_02042960((void *)0x0219da4c,0x168000);
    FUN_02042960((void *)0x0219da44,0xf0000);
    FUN_02042960((void *)0x0219da54,0x168000);
    FUN_02042960((void *)0x0219da48,0x12c000);
    FUN_02042960((void *)0x0219da40,0x258000);
}
