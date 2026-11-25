// FUN_0204f4a0 @ 0x0204f4a0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f4a0 @ 0x0204f4a0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0204f4a0.txt.
 */
extern void *FUN_020b3d04(void); extern unsigned int FUN_020b403c(void *,void *,unsigned int,unsigned int,unsigned int);
unsigned int FUN_0204f4a0(void *unused,void *a,unsigned int b,unsigned int c,unsigned int d) { return FUN_020b403c(FUN_020b3d04(),a,b,c,d); }
