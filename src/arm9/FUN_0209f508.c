// FUN_0209f508 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0209f508 @ 0x0209f508 (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Animate object vertical bob and inherit selected target heading.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f508.txt.
 */
typedef struct {int x,y,z;} V;extern char *UNK_02108c84;extern short UNK_020ed83c[];extern int FUN_020b80f0(int);extern void FUN_0203067c(void *,unsigned short),FUN_02030658(void *,void *),FUN_0203041c(void *);void FUN_0209f508(char *s){V p;char *manager,*target;int index;if(FUN_020b80f0(**(signed char **)(s+48))){manager=UNK_02108c84;if(manager){target=*(char **)(manager+64+4*(*(int *)(manager+100)));if(target)FUN_0203067c(s,*(unsigned short *)(target+130));}p=*(V *)(s+56);*(short *)(s+52)=*(unsigned short *)(s+52)+3840;index=*(unsigned short *)(s+52)>>4;p.y+=(int)(((long long)UNK_020ed83c[2*index]*819+2048)>>12);FUN_02030658(s,&p);}FUN_0203041c(s);}
