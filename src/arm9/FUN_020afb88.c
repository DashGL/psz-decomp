// FUN_020afb88 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_020afb88 @ 0x020afb88 (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global array and reset receiver counters and limit.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afb88.txt.
 */
extern unsigned int D_0211a9a8[];
void FUN_020afb88(unsigned int *self) { int i; for(i=0;i<4;i++) D_0211a9a8[i]=0; self[14]=0; self[16]=0; self[17]=0x0ffff000; }
