// FUN_02052850 @ 0x02052850 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02052850 @ 0x02052850 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02052850.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int); extern void FUN_020ba8ac(void *);
void *FUN_02052850(char *s) { *(unsigned int *)s=0x020f93e0; FUN_020bed1c(FUN_020be450(),*(int *)(s+0x78)); *(int *)(s+0x78)=-1; FUN_020ba8ac(s); return s; }
