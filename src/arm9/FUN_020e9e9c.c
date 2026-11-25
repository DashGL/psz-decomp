// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020e9e9c @ 0x020e9e9c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int data_0211e5e8[];
extern unsigned int FUN_020ea514(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020e9e9c(unsigned int output){return FUN_020ea514(*(data_0211e5e8+2),768,output)!=0;}
