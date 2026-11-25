// FUN_020d77c0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
extern char G_020FFB78[];
void FUN_020d77c0(int index,unsigned int value){if(index>=50 && index<=254)((unsigned int *)G_020FFB78)[index]=value;}
