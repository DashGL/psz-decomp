// FUN_02050148 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02050148 @ 0x02050148 (inventory code 0xa4, thumb)
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 127.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b127/02050148.txt.
 */
extern char G_020F9314[]; extern char G_020F9320[]; extern char G_020F9364[]; extern char G_020F9378[]; extern char G_020F938C[];
extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,int),*FUN_020ba374(void *,void *,int),*FUN_020ba440(void *);extern void FUN_020bc3c0(void *,void *,int),FUN_02050250(void *);extern int FUN_020038ec(void *,unsigned int,const char *,...);void FUN_02050148(void **s,void *name,int type){char path[64];unsigned int size;void *p;if(type<0||type>=3)return;p=FUN_020ba894(132);if(p)p=FUN_020bc2dc(p,((void **)G_020F9314)[type],0);s[0]=p;p=FUN_020ba894(132);if(p)p=FUN_020bc2dc(p,((void **)G_020F9320)[type],0);s[1]=p;if(s[0]){FUN_020038ec(path,64,(const char *)G_020F9364,name);FUN_020bc3c0(s[0],path,0);}if(s[1]){FUN_020038ec(path,64,(const char *)G_020F9378,name);FUN_020bc3c0(s[1],path,0);}size=0;FUN_020038ec(path,64,(const char *)G_020F938C,name);s[3]=FUN_020ba374(path,&size,16);s[2]=FUN_020ba440(s[3]);FUN_02050250(s);}
