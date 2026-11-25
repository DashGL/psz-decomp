// FUN_overlay_28__0219bcc0 @ 0x0219bcc0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219bcc0 @ 0x0219bcc0 (code 0x1c, checked pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_28__0219bcc0(void) {
    FUN_02042960((void *)0x0219c1b4,0xbf);
    FUN_02042960((void *)0x0219c1b0,0x60);
    FUN_02042960((void *)0x0219c1ac,0x333);
}
