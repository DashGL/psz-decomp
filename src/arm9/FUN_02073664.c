// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_02073664 @ 0x02073664
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char D_0211a230[];
/* USA ROM reconstruction, 2026-11-04.
 * Reset global state then set mode byte.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073664.txt.
 */
extern void FUN_02073678(void);
void FUN_02073664(void) { FUN_02073678(); D_0211a230[12]=2; }
