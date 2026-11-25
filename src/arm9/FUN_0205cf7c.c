// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// FUN_0205cf7c @ 0x0205cf7c
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 229.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b229/0205cf7c.txt.
 */
extern unsigned short data_0211259c[];
void FUN_0205cf7c(void){unsigned short *p=data_0211259c;volatile unsigned char *hardware=(volatile unsigned char *)0x04000240;p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;p[11]=0;p[12]=0;*(volatile unsigned int *)hardware=0;hardware[4]=0;hardware[5]=0;hardware[6]=0;*(volatile unsigned short *)(hardware+8)=0;}
