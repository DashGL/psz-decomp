// FUN_0203d2a4 @ 0x0203d2a4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d2a4 @ 0x0203d2a4 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/0203d2a4.txt.
 */
extern void *FUN_020352a4(void *,unsigned int); extern void *FUN_020352c0(void *); extern int FUN_0203d34c(void *);
int FUN_0203d2a4(char *s) { void *p=FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,*(unsigned int *)(s+0xafc))); if(FUN_0203d34c(s)==1 && p) return 1; return 0; }
