// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
// FUN_020b247c @ 0x020b247c
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_020832b4(int),FUN_020b23e8(void *);int FUN_020b247c(char *s){int choices[3],count=0,i;for(i=0;i<3;i++)if(*(int *)(s+32*i+28)>0){choices[count]=i;count++;}if(count){int n=choices[FUN_020832b4(count)];if(n>=0 && n<3)return FUN_020b23e8(s+32*n);}return -1;}
