// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02062214(const unsigned short *p){unsigned int n=0;while(*p++)n++;return n;}
