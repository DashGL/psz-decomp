// FUN_020a1368 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020a1368 @ 0x020a1368
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute completion percentage across seventeen categories.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1368.txt.
 */
extern unsigned char data_020f4c90[];
extern unsigned int FUN_020a1320(void *,int);unsigned int FUN_020a1368(void *self){unsigned int total=0,count=0;int i;for(i=0;i<17;i++){count+=FUN_020a1320(self,i+1);total+=data_020f4c90[i];}if(total==count)return 100;return 100*count/total;}
