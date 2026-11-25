// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02012218(char *p){unsigned int *n=*(unsigned int **)(p+0x24);unsigned int total=0;while(n){total+=n[1];n=(unsigned int *)n[3];}return total;}
