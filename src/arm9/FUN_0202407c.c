// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_0202407c @ 0x0202407c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern char * data_021181a0[];
void FUN_0202407c(char *self){char *ctx=*(data_021181a0+1);*(void **)(self+0xa4)=*(void **)(ctx+0xa4);}
