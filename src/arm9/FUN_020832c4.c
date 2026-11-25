// FUN_020832c4 @ 0x020832c4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020832c4 @ 0x020832c4 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize descriptor sentinels and four paired entries.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020832c4.txt.
 */
void FUN_020832c4(signed char *p) { int i;p[0]=0;p[1]=-1;p[2]=0;p[3]=-1;p[4]=0;p[5]=0;p[6]=0;p[7]=0;*(int *)(p+8)=-1;p[12]=-1;p[13]=-1;p[14]=-1;p[15]=-1;p[24]=-1;p[25]=-1;for(i=0;i<4;i++){p[16+i]=-1;p[20+i]=0;} }
