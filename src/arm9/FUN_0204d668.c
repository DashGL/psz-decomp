// FUN_0204d668 @ 0x0204d668 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204d668 @ 0x0204d668 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0204d668.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int);
void FUN_0204d668(char *s) { int handle=*(int *)(s+0xc0); if(handle!=-1) { FUN_020bed1c(FUN_020be450(),handle); *(int *)(s+0xc0)=-1; } }
