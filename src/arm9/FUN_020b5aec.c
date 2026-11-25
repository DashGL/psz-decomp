// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020b5aec @ 0x020b5aec
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear bit24 in matching nonnull object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5aec.txt.
 */
void FUN_020b5aec(void *unused,unsigned int id,char *object) { if(object && id==*(unsigned int *)(object+232)) *(unsigned int *)(object+228)&=0xfeffffff; }
