// FUN_0200d5e0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0200d5e0 @ 0x0200d5e0
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
// USA ARM9 supporting audio/runtime leaf; actual instruction and literal review.
extern unsigned int D_02101e24[];
void FUN_0200d5e0(unsigned int mask){*D_02101e24&= ~mask;}
