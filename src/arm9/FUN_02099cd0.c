// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// FUN_02099cd0 @ 0x02099cd0 (inventory code 0x4e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy static halfword descriptor and resolve dynamic final value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099cd0.txt.
 */
extern short D_020f467e[];
extern short D_020f4680[];
extern short D_020f4682[];
extern short D_020f4684[];
extern short *FUN_02099e14(void *,int,int);int FUN_02099cd0(void *s,short *out,int category,int index){if(category>=0 && category<5 && index>=0 && index<7){out[0]=D_020f467e[index*4];out[1]=D_020f4680[index*4];out[2]=D_020f4682[index*4];out[3]=D_020f4684[index*4];if(out[0]!=-1)out[3]=FUN_02099e14(s,category,out[0])[2];return 1;}return 0;}
