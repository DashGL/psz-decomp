// FUN_020e1664 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020e1664 @ 0x020e1664
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA instruction-derived state/runtime leaf: address of table slot. */
extern int D_0211dcc4[];
int *FUN_020e1664(int index){return &D_0211dcc4[index];}
