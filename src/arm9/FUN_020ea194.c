// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived runtime/protocol leaf.
int FUN_020ea194(const unsigned char *p){int i;for(i=0;i<32;i++)if(p[i])return 1;return 0;}
