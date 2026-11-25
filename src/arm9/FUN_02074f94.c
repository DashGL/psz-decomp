// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_02074f94 @ 0x02074f94 (inventory code 0x30, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find first eight-byte record whose signed flags lack bit zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074f94.txt.
 */
int FUN_02074f94(char *self) { int i=0; for(;i<*(int *)(self+180);i++) { char *p=*(char **)(self+176)+8*i; if(!(*(short *)(p+4)&1)) return i; } return -1; }
