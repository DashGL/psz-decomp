// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_020a9004 @ 0x020a9004
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset timer state and enable all nonspecial slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9004.txt.
 */
extern int data_0211a99c[];
void FUN_020a9004(char *self){int i;if(*(data_0211a99c+1))*(data_0211a99c+1)=0;*(int *)(self+8)=0;*(int *)(self+12)=0;*(int *)(self+16)=0;*(int *)(self+28)=*(int *)(self+4)*5400;*(int *)(self+20)=0;*(int *)(self+24)=0;for(i=0;i<6;i++)if(i!=2)*(int *)(self+32+4*i)=1;}
