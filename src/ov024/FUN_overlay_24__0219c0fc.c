// FUN_overlay_24__0219c0fc @ 0x0219c0fc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219c0fc @ 0x0219c0fc (code 0x1e, checked pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: initialize 3 module words through reviewed
 * resident setter 02042960. Both addresses and values decoded independently
 * from this module's instructions/pools; symbolic global identities pending.
 */
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_24__0219c0fc(void) {
    FUN_02042960((void *)0x0219c7b0,0x155);
    FUN_02042960((void *)0x0219c7b8,0x4cd);
    FUN_02042960((void *)0x0219c7b4,0x19000);
}
