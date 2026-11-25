// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// FUN_020c086c @ 0x020c086c
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const unsigned char D_0211b444[];
extern signed char D_0211b744[];
extern signed char D_0211b3ec[];
/* USA ROM reconstruction, 2026-11-04.
 * Rank valid records by signed priority ascending, choosing higher index on ties, then write ranks to record byte2.
 * Evidence: scratch/coverage-root/batch22/020c086c.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int);
extern int FUN_020dd6c4(const void *);
void FUN_020c086c(void){signed char ranks[64],rank=1;int i,min,index;FUN_020656b8(ranks,0,64);for(;;){min=127;index=0;for(i=63;i>=0;--i){if(FUN_020dd6c4(D_0211b444+12*i)==1 && ranks[i]==0){int p=*(D_0211b744+52*i+2);if(min>p){min=p;index=i;}}}if(min==127)break;ranks[index]=rank;rank=(signed char)(rank+1);}for(i=0;i<64;++i)if(FUN_020dd6c4(D_0211b444+12*i)==1)*(D_0211b3ec+52*i+0x35a)=ranks[i];}
