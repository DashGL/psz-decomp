// FUN_overlay_28__0219bc34 @ 0x0219bc34 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219bc34 @ 0x0219bc34 (code 0x1e, checked pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28, 2026-11-04: initialize constant module vectors/words
 * using reviewed three-word setter 02035408 and word setter 02042960.
 * Full operand decoding admits only constant construction and these calls;
 * all argument registers are forgotten after each call. Global names pending.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_28__0219bc34(void) {
    FUN_02035408((void *)0x0219c03c,0x27c,0xe02,0x0);
    FUN_02035408((void *)0x0219c030,0x1713,0x1713,0x1713);
}
