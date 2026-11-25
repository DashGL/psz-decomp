// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_020123e4(unsigned int *p){unsigned int *n=(unsigned int *)p[11];while(n){n[2]=p[7];n=(unsigned int *)n[3];}p[10]=p[7];}
