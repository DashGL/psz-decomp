// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020a0cfc @ 0x020a0cfc (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Refresh global state then increment global counter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0cfc.txt.
 */
extern unsigned int D_0211a658;
extern void FUN_020a0d10(void); void FUN_020a0cfc(void) { FUN_020a0d10(); ++D_0211a658; }
