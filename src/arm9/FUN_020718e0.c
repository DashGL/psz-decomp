// FUN_020718e0 @ 0x020718e0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020718e0 @ 0x020718e0 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazy global accessor, reloading pointer after initializer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020718e0.txt.
 */
extern void FUN_020718f8(void);
void *FUN_020718e0(void) { if(!*(void **)0x0211a1fc) FUN_020718f8(); return *(void **)0x0211a1fc; }
