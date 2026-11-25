// FUN_02098558 @ 0x02098558 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02098558 @ 0x02098558 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve identifier only for category three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098558.txt.
 */
extern int FUN_020855bc(int); extern void *FUN_0208555c(int); void *FUN_02098558(int *self) { if(FUN_020855bc(*self)==3) return FUN_0208555c(*self); return 0; }
