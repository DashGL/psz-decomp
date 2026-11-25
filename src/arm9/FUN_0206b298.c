// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_0206b298 @ 0x0206b298
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern volatile unsigned short data_0211a144[];
unsigned int FUN_0206b298(unsigned int mask){return *(data_0211a144+28)&mask;}
