// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_02072124 @ 0x02072124
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_020f25e0[];
extern char D_020f25e2[];
extern char D_020f25e4[];
extern char D_020f25e8[];
extern char D_020f25ec[];
/* USA ROM reconstruction, 2026-11-04.
 * Load selected transform preset.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072124.txt.
 */
void FUN_02072124(char *self,int index) { if(index>=0 && index<3) { *(int *)(self+136)=index; *(unsigned short *)(self+128)=*(unsigned short *)(D_020f25e0+16*index); *(unsigned short *)(self+130)=*(unsigned short *)(D_020f25e2+16*index); *(unsigned short *)(self+132)=*(unsigned short *)(D_020f25e4+16*index); *(int *)(self+124)=*(int *)(D_020f25e8+16*index); *(int *)(self+140)=*(int *)(D_020f25ec+16*index); } }
