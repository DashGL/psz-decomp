// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa214[];
extern unsigned char DAT_020fa228[];
// FUN_02077fa4 @ 0x02077fa4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily acquire resource handle when stored handle is -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077fa4.txt.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
void FUN_02077fa4(int *self) { if(self[0]==-1) self[0]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_020fa214 + 0u),(void *)((unsigned int)DAT_020fa228 + 0u),2); }
