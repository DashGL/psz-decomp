// FUN_02043a24 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02043a24 @ 0x02043a24
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Subtract one with word wrap, clamp signed result to [0,4], and read fixed table.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02043a24.txt.
 */
extern unsigned int data_020ed46c[];
unsigned int FUN_02043a24(unsigned int value) { int index=(int)(value-1); if(index<0) index=0; else if(index>=5) index=4; return data_020ed46c[index]; }
