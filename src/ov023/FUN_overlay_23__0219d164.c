// FUN_overlay_23__0219d164 @ 0x0219d164 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219d164 @ 0x0219d164 (code 0x22, checked pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_23__0219d164(void) {
    FUN_02042960((void *)0x0219d91c,0xc00);
    FUN_02042960((void *)0x0219d920,0x78000);
    FUN_02042960((void *)0x0219d918,0x2000);
}
