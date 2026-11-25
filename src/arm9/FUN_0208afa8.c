// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// FUN_0208afa8 @ 0x0208afa8
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_020c331c(int,int,int,int),FUN_020c3788(void *,void *,int,int,int);extern int FUN_0208b09c(void *,void *);extern void *FUN_0209e1a8(int,int);void FUN_0208afa8(char *s,unsigned char *desc){int idx;FUN_020c331c(63,0xb0000,0xfb000,*(int *)(s+32));idx=FUN_0208b09c(s,desc);if(!*(int *)(s+56)){void *p=FUN_0209e1a8((desc+idx)[2],0);if(p){FUN_020c3788(*(void **)(s+52),p,72,12,2);*(int *)(s+56)=1;}}}
