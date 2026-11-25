// FUN_0204a438 @ 0x0204a438 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a438 @ 0x0204a438 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/0204a438.txt.
 */
extern int FUN_02047440(void *); extern int FUN_0204770c(void *); extern void FUN_0206e728(void *,void *); extern void FUN_0206e738(void *,void *);
int FUN_0204a438(char *s) { int r=FUN_02047440(s); if(!r && FUN_0204770c(s) && !*(int *)(s+0x104) && *(void **)(s+0x30)) { FUN_0206e728(*(void **)(s+0x30),(void *)0x0204a47d); FUN_0206e738(*(void **)(s+0x30),s); *(int *)(s+0x104)=1; } return r; }
