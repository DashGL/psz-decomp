// FUN_0208cd94 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0208cd94 @ 0x0208cd94 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve valid player and invoke four-argument virtual operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208cd94.txt.
 */
extern int FUN_02078188(int); extern void *FUN_0208555c(int); void FUN_0208cd94(int *self) { if(FUN_02078188(self[1])) { void *p=FUN_0208555c(self[1]); if(p) (*(void (***)(void *,int,int,int))p)[53](p,self[2],1,1); } }
