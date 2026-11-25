// FUN_02032488 @ 0x02032488 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032488 @ 0x02032488 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02032488.txt.
 */
extern void FUN_0203254c(void *); extern void FUN_020ba8ac(void *); extern void FUN_02033270(void);
void FUN_02032488(void) { void *p=*(void **)0x02108c64; if(p) { if(p) { FUN_0203254c(p); FUN_020ba8ac(p); } *(void **)0x02108c64=0; } FUN_02033270(); }
