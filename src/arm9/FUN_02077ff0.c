// FUN_02077ff0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02077ff0 @ 0x02077ff0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily acquire resource handle when stored handle is -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077ff0.txt.
 */
extern char G_020FA23C[]; extern char G_020FA250[];
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
void FUN_02077ff0(int *self) { if(self[1]==-1) self[1]=FUN_020c2438(FUN_020c1fc8(),(void *)G_020FA23C,(void *)G_020FA250,2); }
