// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived protocol/runtime leaf.
int FUN_020d915c(const signed char *p,int count){int i;for(i=0;i<count;i++)if(!p[i])return i+1;return -1;}
