// FUN_0204a4f0 @ 0x0204a4f0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a4f0 @ 0x0204a4f0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/0204a4f0.txt.
 */
extern void FUN_02032dfc(void *,void *); extern void FUN_02045378(void); extern int FUN_0206d36c(void *,int); extern void FUN_0204551c(void); extern void FUN_0204641c(void);
void FUN_0204a4f0(void) { unsigned int temp[5]; FUN_02032dfc(temp,*(void **)0x02108c64); FUN_02045378(); if(!FUN_0206d36c(temp,0)) FUN_0204551c(); FUN_0204641c(); }
