// FUN_0204e410 @ 0x0204e410 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e410 @ 0x0204e410 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0204e410.txt.
 */
extern void *FUN_0208555c(int); extern int FUN_0203ae60(void *); extern void FUN_020437d8(int,int,void *,int,int);
void FUN_0204e410(int id,void *arg) { void *p=FUN_0208555c(id); if(p && !FUN_0203ae60(p)) FUN_020437d8(id,29,arg,29,0); }
