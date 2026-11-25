// FUN_0204fc9c @ 0x0204fc9c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fc9c @ 0x0204fc9c (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0204fc9c.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int); extern void FUN_0204b130(void *);
void *FUN_0204fc9c(char *s) { int handle; *(unsigned int *)s=0x020f92bc; handle=*(int *)(s+0x174); if(handle!=-1) { FUN_020bed1c(FUN_020be450(),handle); *(int *)(s+0x174)=-1; } FUN_0204b130(s); return s; }
