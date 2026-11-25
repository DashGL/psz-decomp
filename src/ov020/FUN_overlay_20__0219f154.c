// FUN_overlay_20__0219f154 @ 0x0219f154 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219f154 @ 0x0219f154 (code 0x62, checked pool extent 0x8c, thumb)
// check: vers=2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20, 2026-11-04: initialize constant module vectors/words
 * using reviewed three-word setter 02035408 and word setter 02042960.
 * Full operand decoding admits only constant construction and these calls;
 * all argument registers are forgotten after each call. Global names pending.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
extern void FUN_02042960(void *,unsigned int);
void FUN_overlay_20__0219f154(void) {
    FUN_02042960((void *)0x0219fb94,0x7800);
    FUN_02042960((void *)0x0219fbbc,0xf000);
    FUN_02042960((void *)0x0219fbb8,0x16000);
    FUN_02042960((void *)0x0219fbb4,0x1e000);
    FUN_02042960((void *)0x0219fbb0,0x2c000);
    FUN_02035408((void *)0x0219fbc0,0x0,0xfffe2000,0x28000);
    FUN_02042960((void *)0x0219fba8,0x400);
    FUN_02042960((void *)0x0219fba4,0x400);
    FUN_02042960((void *)0x0219fba0,0xc800);
}
