// FUN_overlay_29__0219ba38 @ 0x0219ba38 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219ba38 @ 0x0219ba38 (code 0x1e, checked pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_29__0219ba38(void) {
    FUN_02042960((void *)0x0219be54,0xff0);
    FUN_02042960((void *)0x0219be50,0xddb);
    FUN_02042960((void *)0x0219be4c,0x111);
}
