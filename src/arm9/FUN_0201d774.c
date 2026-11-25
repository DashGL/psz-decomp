// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_0201d774 @ 0x0201d774
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
unsigned int FUN_0201d774(unsigned int base){unsigned int table=base+*(unsigned short *)(base+12);if(*(unsigned short *)(base+14)==1){if(*(unsigned int *)base==0x30585442)return base+*(unsigned int *)table;return 0;}return base+*(unsigned int *)(table+4);}
