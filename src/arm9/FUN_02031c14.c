// FUN_02031c14 @ 0x02031c14 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031c14 @ 0x02031c14 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02031c14.txt.
 */
extern void *FUN_0207832c(void); extern void FUN_02031e60(void *,void *,int,int,int); extern void FUN_02032018(void *,int);
void FUN_02031c14(void *s) { void *p=*(void **)0x02108c60; FUN_02031e60(p,FUN_0207832c(),0,0,0); FUN_02032018(s,0); }
