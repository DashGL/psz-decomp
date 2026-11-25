// FUN_overlay_21__021a1090 @ 0x021a1090 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_21__021a1090 @ 0x021a1090 (code 0x54, checked pool extent 0x84, thumb)
// check: vers=2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21, 2026-11-04: initialize constant module vectors/words
 * using reviewed three-word setter 02035408 and word setter 02042960.
 * Full operand decoding admits only constant construction and these calls;
 * all argument registers are forgotten after each call. Global names pending.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_21__021a1090(void) {
    FUN_02042960((void *)0x021a1a50,0x7000);
    FUN_02042960((void *)0x021a1a68,0x1e000);
    FUN_02042960((void *)0x021a1a64,0x7000);
    FUN_02042960((void *)0x021a1a60,0x11000);
    FUN_02042960((void *)0x021a1a5c,0x800);
    FUN_02042960((void *)0x021a1a58,0x19000);
    FUN_02042960((void *)0x021a1a54,0x155);
    FUN_02035408((void *)0x021a1a6c,0x5c76,0x4c7b,0x175f1);
}
