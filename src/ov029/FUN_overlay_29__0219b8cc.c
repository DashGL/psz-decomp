// FUN_overlay_29__0219b8cc @ 0x0219b8cc (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b8cc @ 0x0219b8cc (code 0x3a, checked pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29, 2026-11-04: initialize 6 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_29__0219b8cc(void) {
    FUN_02042960((void *)0x0219bb74,0x31);
    FUN_02042960((void *)0x0219bb70,0x9000);
    FUN_02042960((void *)0x0219bb6c,0xf000);
    FUN_02042960((void *)0x0219bb68,0x4cd);
    FUN_02042960((void *)0x0219bb64,0x333);
    FUN_02042960((void *)0x0219bb60,0xf000);
}
