// FUN_02042744 @ 0x02042744 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042744 @ 0x02042744 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/02042744.txt.
 */
extern void FUN_0203f878(void); extern void FUN_02050e14(void); extern void *FUN_020ba894(unsigned int); extern void FUN_02042790(void *);
int FUN_02042744(void) { unsigned int *p; FUN_0203f878(); FUN_02050e14(); p=FUN_020ba894(36); if(p) { *p=0; FUN_02042790(p); } *(void **)0x02108d68=p; return 1; }
