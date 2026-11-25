// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_02023f70 @ 0x02023f70
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern char * data_021181a0[];
void FUN_02023f70(void *p){char *ctx=*(data_021181a0+1);*(void **)(ctx+0xa4)=p;}
