// FUN_0203e18c @ 0x0203e18c (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e18c @ 0x0203e18c (inventory code 0x90, thumb)
// check: 2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 56.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b56/0203e18c.txt.
 */
extern int FUN_0200a3a0(int,int);extern int FUN_02085438(void);extern int FUN_0203beb4(void *);extern int FUN_0203b41c(void *);
void FUN_0203e18c(char *s,unsigned int amount,int divisor){int value=FUN_0200a3a0((int)((0u-amount)*1000),divisor),index=FUN_02085438()-1;if(FUN_0203beb4(s)&&!FUN_0203b41c(s)){int i;if(index<0||index>=4)index=0;if(value>=0&&value<=1000){for(i=0;i<6;i++)if(*(unsigned short *)(s+3548+2*i)>value||i==5){unsigned int a=*(unsigned short *)(s+3560+2*i),b=*(unsigned short *)(s+3476+2*index);int increase=FUN_0200a3a0((int)(a*b),100);*(short *)(s+340)=(unsigned int)*(short *)(s+340)+(unsigned int)increase;break;}if(*(short *)(s+340)>10000)*(short *)(s+340)=10000;}}}
