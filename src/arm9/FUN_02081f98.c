// FUN_02081f98 @ 0x02081f98 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02081f98 @ 0x02081f98 (inventory code 0xb0, thumb)
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose start coordinates and register the initial descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081f98.txt.
 */
extern int FUN_020832b4(int);extern unsigned char *FUN_02083350(void *,int,int);extern void FUN_02083504(void *,void *),FUN_0208209c(void *,void *,int);void FUN_02081f98(char *s,int mode){unsigned char *p;if(mode>=9)mode=0;if(mode<0){*(int *)(s+2176)=FUN_020832b4(7);*(int *)(s+2180)=FUN_020832b4(9)+1;}else{*(int *)(s+2176)=3;*(int *)(s+2180)=9-mode;}*(int *)(s+2196)=*(int *)(s+2176);*(int *)(s+2192)=*(int *)(s+2196);*(int *)(s+2204)=*(int *)(s+2180);*(int *)(s+2200)=*(int *)(s+2204);p=FUN_02083350(s+180,*(int *)(s+2176),*(int *)(s+2180));p[0]|=6;p[3]=0;p[1]=*(int *)(s+2168);++*(int *)(s+2168);p[12]=*(int *)(s+2176);p[13]=*(int *)(s+2180);FUN_02083504(s+96,p);FUN_0208209c(s,p,0);}
