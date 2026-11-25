// FUN_020d37bc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020d37bc @ 0x020d37bc
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA instruction-derived runtime/container leaf: big-endian u16 store. */
void FUN_020d37bc(unsigned char *p,int i,int value){p[i++]=value>>8;p[i]=value;}
