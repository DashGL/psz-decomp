// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_020e9628 @ 0x020e9628
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char * data_0211de64[];
void FUN_020e9628(unsigned int value){*(unsigned int *)(*(data_0211de64+1)+0x1a0)=value;}
