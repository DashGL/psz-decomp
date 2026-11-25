// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_020b9304 @ 0x020b9304
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
void FUN_020b9304(char *self,char *out){*(int *)out=1;*(unsigned int *)(out+180)|=1;*(unsigned int *)(out+168)=(unsigned int)*(unsigned short *)(self+92)>>1;*(unsigned int *)(out+172)=0;*(unsigned int *)(out+176)|=1;}
