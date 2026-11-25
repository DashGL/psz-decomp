// FUN_02070098 @ 0x02070098 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070098 @ 0x02070098 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Adjust unsigned halfword with upper cap and return overflow or underflow.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070098.txt.
 */
int FUN_02070098(char *self,int delta) { int value=*(unsigned short *)(self+334)+delta; if(delta>0) { int cap=*(unsigned short *)(self+92); if(cap>=value) { *(unsigned short *)(self+334)=value; return 0; } *(unsigned short *)(self+334)=cap; return value-*(unsigned short *)(self+92); } if(delta<0) { if(value<0) return -value; *(unsigned short *)(self+334)=value; return 0; } return 0; }
