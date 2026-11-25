// FUN_0204c2a4 @ 0x0204c2a4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c2a4 @ 0x0204c2a4 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/0204c2a4.txt.
 */
extern void FUN_0204add0(void *); extern void FUN_0203955c(void *);
void *FUN_0204c2a4(char *s) { FUN_0204add0(s); *(unsigned int *)s=0x020f91e8; *(unsigned int *)(s+0x100)=0; *(unsigned int *)(s+0x104)=0; *(unsigned int *)(s+0x118)=0; *(unsigned int *)(s+0x11c)=0; *(unsigned int *)(s+0x120)=0; FUN_0203955c(s+0x108); return s; }
