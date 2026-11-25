// FUN_02085198 @ 0x02085198 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02085198 @ 0x02085198 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clamp player resource adjustment to zero and maximum.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085198.txt.
 */
void FUN_02085198(int index,int delta){char *g=*(char **)0x0211a52c;if(g && index>=0 && index<4){char *record=g+48+148*index;unsigned short *p=(unsigned short *)(g+608+8*index);int value=*p+delta;if(value<0)value=0;else if(value>*(unsigned short *)(record+12))value=*(unsigned short *)(record+12);*p=value;}}
