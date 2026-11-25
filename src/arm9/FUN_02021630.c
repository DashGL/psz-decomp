// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
int FUN_02021630(const unsigned short *a,const unsigned short *b){int i;for(i=0;i<3;i++)if(*a++!=*b++)return 1;return 0;}
