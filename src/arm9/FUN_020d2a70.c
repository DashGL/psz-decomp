// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived runtime/container leaf.
int FUN_020d2a70(const unsigned char *a,const unsigned char *b){int i;for(i=0;i<32;i++)if(i!=0 && i!=13 && a[i]!=b[i])return 0;return 1;}
