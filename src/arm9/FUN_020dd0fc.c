// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived protocol/runtime leaf.
int FUN_020dd0fc(const unsigned char *p){int i;for(i=0;i<10;i++)if(p[i]<32 || p[i]>126)return 0;return 1;}
