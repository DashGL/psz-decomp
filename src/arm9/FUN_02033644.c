// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_02033644 @ 0x02033644
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Add input to global word +4 and return low byte.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02033644.txt.
 */
extern unsigned int data_02108c6c[];
unsigned int FUN_02033644(unsigned int increment) { unsigned int value=*(data_02108c6c+1)+increment; *(data_02108c6c+1)=value; return (unsigned char)value; }
