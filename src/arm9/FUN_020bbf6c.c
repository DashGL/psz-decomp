// FUN_020bbf6c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bbf6c @ 0x020bbf6c
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0211b330[];
/* USA ROM reconstruction, 2026-11-04.
 * Test incoming mask against global input halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbf6c.txt.
 */
int FUN_020bbf6c(unsigned int mask) { if(mask&*(unsigned short *)(D_0211b330+10)) return 1; return 0; }
