// FUN_0203e504 @ 0x0203e504 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e504 @ 0x0203e504 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Configure optional global receiver with slot zero, fixed data and option zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0203e504.txt.
 */
extern void FUN_02034528(void *,int,void *,int);
void FUN_0203e504(void) { void *object=*(void **)0x02108c84; if(object) FUN_02034528(object,0,(void *)0x020ed3bc,0); }
