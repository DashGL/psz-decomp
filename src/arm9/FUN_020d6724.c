// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived runtime/container leaf.
int FUN_020d6724(unsigned int p,int value){int count=*(int *)(p+256);if(count>=254)return 0;if(value<1 || value>254)return 0;*(unsigned int *)(p+256)=(unsigned int)count+1;*(unsigned char *)(p+(unsigned int)count)=value;return 1;}
