// FUN_0204f478 @ 0x0204f478 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f478 @ 0x0204f478 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/0204f478.txt.
 */
extern int FUN_0204f464(void); extern void *FUN_020b3d04(void); extern char *FUN_020b4324(void *); extern void FUN_02039534(void *,void *);
int FUN_0204f478(void *unused,void *out) { int result=0; if(FUN_0204f464()) { char *p=FUN_020b4324(FUN_020b3d04()); if(p) { FUN_02039534(out,p+4); result=1; } } return result; }
