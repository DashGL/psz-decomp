// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f8b30[];
extern unsigned char DAT_020f8b3c[];
extern unsigned char DAT_020f8b44[];
extern unsigned char DAT_020f9e6c[];
// FUN_0203f9c8 @ 0x0203f9c8 (inventory code 0xb4, thumb)
// check: 2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 129.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b129/0203f9c8.txt.
 */
extern int FUN_020038ec(void *,unsigned int,const char *,...);extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,unsigned int);extern void FUN_020bc418(void *,void *,int),FUN_0203f8b8(void *),FUN_0203fb70(void *,void *),FUN_020c34c8(void *);void FUN_0203f9c8(char *s){char path[64];int i,current=*(int *)(s+16);char *record,*p;if(current<0){for(i=0;i<3;i++){int id=(*(int **)(s+12))[i];if(id!=-1){record=*(char **)(s+4)+52*i;FUN_020038ec(path,64,(const char *)((unsigned int)DAT_020f8b30 + 0u),(void *)((unsigned int)DAT_020f8b3c + 0u),((void **)((unsigned int)DAT_020f9e6c + 0u))[id],(void *)((unsigned int)DAT_020f8b44 + 0u));p=FUN_020ba894(132);if(p)p=FUN_020bc2dc(p,record+4,*(unsigned int *)(s+20));*(void **)record=p;FUN_020bc418(p,path,0);*(int *)(record+16)=1;*(int *)(s+16)=i;break;}}}else{record=*(char **)(s+4)+52*current;p=*(char **)record;if(!p){FUN_0203f8b8(record);*(int *)(s+16)=-1;}else if(*(int *)(p+4)==2){*(int *)(record+12)=(*(int **)(s+12))[current];FUN_0203fb70(s,record);(*(int **)(s+12))[*(int *)(s+16)]=-1;*(int *)(s+16)=-1;}}if(*(void **)s)FUN_020c34c8(*(void **)s);}
