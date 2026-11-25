// FUN_020496b4 @ 0x020496b4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020496b4 @ 0x020496b4 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/020496b4.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int); extern void FUN_0204b130(void *);
void *FUN_020496b4(char *s) { int handle; *(unsigned int *)s=0x020f9034; handle=*(int *)(s+0x190); if(handle!=-1) { FUN_020bed1c(FUN_020be450(),handle); *(int *)(s+0x190)=-1; } FUN_0204b130(s); return s; }
