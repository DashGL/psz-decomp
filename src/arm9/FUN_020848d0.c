// FUN_020848d0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// FUN_020848d0 @ 0x020848d0 (inventory code 0xc, thumb)
// flags: -O4,s
extern signed char D_020f2fd8[];
int FUN_020848d0(int group,int column) { return D_020f2fd8[3*group+column]; }
