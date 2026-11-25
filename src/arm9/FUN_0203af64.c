// FUN_0203af64 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203af64 @ 0x0203af64 (inventory code 0x82, thumb)
// check: 2.0/sp2p3 target=0x82 candidate=0x82 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 120.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b120/0203af64.txt.
 */
extern char *FUN_020384a4(void *,unsigned int);extern int FUN_020424b4(void *,int);void FUN_0203af64(char *s){char *part=FUN_020384a4(s,*(unsigned int *)(s+208));int frame,index;void (*callback)(void *,unsigned int);void (*last)(void *);if(part&&*(void **)(s+140)){frame=FUN_020424b4(*(void **)(s+140),0);index=*(signed char *)(s+580);if(index<8&&frame>=(int)((unsigned int)*(unsigned char *)(part+8+index)<<12)){callback=*(void (**)(void *,unsigned int))(s+536+4*index);if(callback){callback(s,0);index=*(signed char *)(s+580);*(void **)(s+536+4*index)=0;*(unsigned char *)(s+580)=(unsigned char)(*(signed char *)(s+580)+1);}}}if(*(int *)(s+228)>=0){last=*(void (**)(void *))(s+568);if(last){last(s);*(void **)(s+568)=0;}}}
