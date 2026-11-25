// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_020e0a0c @ 0x020e0a0c
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned short * data_0211dc9c[];
int FUN_020e0a0c(void){unsigned short *p=*(data_0211dc9c+1);if(p && p[2]==6)return 1;return 0;}
