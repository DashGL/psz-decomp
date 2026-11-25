// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_02078064 @ 0x02078064
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_020fa264[];
extern char D_020fa274[];
/* USA ROM reconstruction, 2026-11-04.
 * Lazily acquire resource handle when stored handle is -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078064.txt.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
void FUN_02078064(int *self) { if(self[2]==-1) self[2]=FUN_020c2438(FUN_020c1fc8(),D_020fa264,D_020fa274,1); }
