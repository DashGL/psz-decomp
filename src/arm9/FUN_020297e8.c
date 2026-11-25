// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
unsigned int FUN_020297e8(unsigned int p,int count,unsigned int stride,unsigned int wanted){int i;unsigned int v;for(i=0;i<count;++i){v=(*(unsigned char *)p<<8)+*(unsigned char *)(p+1);if(stride==3)v=(v<<8)+*(unsigned char *)(p+2);if(v==wanted)return 1;p+=stride;}return 0;}
