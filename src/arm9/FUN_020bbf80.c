// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b330[];
// FUN_020bbf80 @ 0x020bbf80 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test incoming mask against global input halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbf80.txt.
 */
int FUN_020bbf80(unsigned int mask) { if(mask&*(unsigned short *)((char *)((unsigned int)DAT_0211b330 + 0u)+8)) return 1; return 0; }
