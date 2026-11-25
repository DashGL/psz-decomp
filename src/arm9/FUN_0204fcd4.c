// FUN_0204fcd4 @ 0x0204fcd4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fcd4 @ 0x0204fcd4 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/0204fcd4.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int); extern void FUN_0204b130(void *); extern void FUN_020ba8ac(void *);
void *FUN_0204fcd4(char *s) { int handle; *(unsigned int *)s=0x020f92bc; handle=*(int *)(s+372); if(handle!=-1) { FUN_020bed1c(FUN_020be450(),handle); *(int *)(s+372)=-1; } FUN_0204b130(s); FUN_020ba8ac(s); return s; }
