// FUN_020b7c20 @ 0x020b7c20 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b7c20 @ 0x020b7c20 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve identifier only if player-category predicate accepts it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7c20.txt.
 */
extern int FUN_02078188(int); extern void *FUN_0208555c(int); void *FUN_020b7c20(int id) { if(FUN_02078188(id)) return FUN_0208555c(id); return 0; }
