// FUN_020e16c0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
// USA instruction-derived state/runtime leaf.
extern unsigned char D_0211dd44[]; void *FUN_020e16c0(int index){return D_0211dd44+index*8;}
