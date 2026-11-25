// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020d86e4 @ 0x020d86e4
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int data_0211dba0[];
int FUN_020d86e4(unsigned int a){return a==*(data_0211dba0+1);}
