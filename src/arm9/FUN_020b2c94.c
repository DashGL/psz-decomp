// FUN_020b2c94 @ 0x020b2c94 (inventory code 0x9e, thumb)
// check: 2.0/sp2p3 target=0x9e candidate=0xa0 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/40 size=0x9e vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Randomly mark eligible links in a contiguous record array.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2c94.txt.
 */
extern unsigned int FUN_020832b4(int);void FUN_020b2c94(char *records,unsigned int count,signed char *settings){unsigned int i;int chance=0,selected,key,flag;int j;char *p;if(settings[8]>=0 && settings[8]<=100)chance=settings[8];for(i=0;i<count;i++){p=records+52*i;if(*(int *)(p+8)!=5 && *(int *)(p+8)!=6 && FUN_020832b4(100)<(unsigned int)chance){selected=*(int *)(p+40);for(j=0;j<4;j++){key=(j>=0 && j<4)?((signed char *)p)[24+j]:-1;if(key>=0){flag=(j>=0 && j<4)?!!((unsigned char)p[28+j]&7):0;if(!flag && selected!=j && j>=0 && j<4)((unsigned char *)p)[28+j]|=4;}}}}}
