// FUN_02047930 @ 0x02047930 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02047930 @ 0x02047930 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/02047930.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int);
void FUN_02047930(char *s) { int handle=*(int *)(s+0x168); if(handle!=-1) { FUN_020bed1c(FUN_020be450(),handle); *(int *)(s+0x168)=-1; } }
