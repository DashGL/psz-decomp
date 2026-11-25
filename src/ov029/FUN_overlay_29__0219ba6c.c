// FUN_overlay_29__0219ba6c @ 0x0219ba6c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219ba6c @ 0x0219ba6c (code 0x2e, checked pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29, 2026-11-04: initialize constant module vectors/words
 * using reviewed three-word setter 02035408 and word setter 02042960.
 * Full operand decoding admits only constant construction and these calls;
 * all argument registers are forgotten after each call. Global names pending.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_29__0219ba6c(void) {
    FUN_02035408((void *)0x0219be7c,0x0,0x333,0x0);
    FUN_02035408((void *)0x0219be88,0x0,0x600,0xfffff800);
    FUN_02042960((void *)0x0219be78,0x222);
    FUN_02042960((void *)0x0219be74,0x333);
}
