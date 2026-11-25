// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_020127c0(char *self,unsigned int i){unsigned int table=*(unsigned int *)(self+0x60);unsigned int result=0;if(i<*(unsigned short *)(table+8))result=*(unsigned int *)(self+0x64)+*(unsigned int *)(table+i*8+12);return result;}
