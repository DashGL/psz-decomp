// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// FUN_02041574 @ 0x02041574
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 118.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b118/02041574.txt.
 */
extern void * DAT_020f8d04[];
extern const char DAT_020f8d14[], DAT_020f8d1c[];
extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,int),*FUN_020bc51c(void *,const void *),*FUN_020ba440(void *),*FUN_0209f170(void);extern void FUN_02041bcc(void *,unsigned int),FUN_020416dc(void *,void *),FUN_02041740(void *),FUN_02041918(void *,unsigned int),FUN_0209f2d0(void *,unsigned int),FUN_02041794(void *,void *);void FUN_02041574(char *s,unsigned int id){unsigned int key[5];void *obj=FUN_020ba894(132);char *data;if(obj)obj=FUN_020bc2dc(obj,*(DAT_020f8d04+1),0);*(void **)s=obj;if(obj){FUN_02041bcc(key,id);FUN_020416dc(s,key);FUN_02041740(s);*(void **)(s+4)=FUN_020ba440(FUN_020bc51c(*(void **)s,DAT_020f8d14));*(void **)(s+28)=FUN_020ba440(FUN_020bc51c(*(void **)s,DAT_020f8d1c));FUN_02041918(s,id);data=*(char **)(s+4);if(data)FUN_0209f2d0(FUN_0209f170(),*(unsigned int *)(data+8));FUN_02041794(s,*(void **)(s+4));}}
