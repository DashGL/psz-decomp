// FUN_02049f9c @ 0x02049f9c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_02049f9c @ 0x02049f9c (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/02049f9c.txt.
 */
extern int FUN_02047958(void *); extern int FUN_0204770c(void *); extern void FUN_0206e728(void *,void *); extern void FUN_0206e738(void *,void *);
int FUN_02049f9c(char *s) { int r=FUN_02047958(s); if(!r && FUN_0204770c(s) && !*(int *)(s+0x16c) && *(void **)(s+0x30)) { if(*(unsigned short *)(s+0x170)) { FUN_0206e728(*(void **)(s+0x30),(void *)0x02049fe9); FUN_0206e738(*(void **)(s+0x30),s); } *(int *)(s+0x16c)=1; } return r; }
