// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020d1ed4 @ 0x020d1ed4
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int data_0211d084[];
void *FUN_020d1ed4(unsigned int a,unsigned int b){unsigned int *p=data_0211d084;p[2]=a;p[3]=b;return p+2;}
