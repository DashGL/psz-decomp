// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_020878d4 @ 0x020878d4
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned resource, unregister matching global and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020878d4.txt.
 */
extern void * data_0211a540[];
extern void FUN_020ba8c4(void *),FUN_02047434(void *);void *FUN_020878d4(char *self){int index;*(unsigned int *)self=0x020fa9a4;if(*(void **)(self+380))FUN_020ba8c4(*(void **)(self+380));index=*(int *)(self+232);if(data_0211a540[index]==self)data_0211a540[index]=0;*(int *)(self+268)=0;FUN_02047434(self);return self;}
