// FUN_0203acc0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203acc0 @ 0x0203acc0 (inventory code 0x98, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 191.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b191/0203acc0.txt.
 */
typedef struct{unsigned int x,y,z;} V;extern int FUN_02031240(void *,void *,unsigned short *,unsigned int);extern void FUN_02031254(void *,void *,unsigned short *),FUN_02037ff0(void *,const void *),FUN_02038084(void *,unsigned short);extern void *FUN_02034680(void *,const void *);void FUN_0203acc0(char *self){V position=*(V *)0x020fc958;unsigned short heading=0;void *manager=*(void **)0x02108c58;if(manager)FUN_02031240(manager,&position,&heading,*(unsigned int *)(self+252));FUN_02037ff0(self,&position);FUN_02034680(self+168,FUN_02034680(self+180,self+156));FUN_02038084(self,heading);*(unsigned short *)(self+316)=heading;manager=*(void **)0x02108c58;if(manager){FUN_02031254(manager,&position,&heading);*(unsigned int *)(self+296)=position.x;*(unsigned int *)(self+300)=position.y;*(unsigned int *)(self+304)=position.z;}else FUN_02034680(self+296,self+156);}
