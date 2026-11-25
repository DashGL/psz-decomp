// FUN_02048658 @ 0x02048658 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048658 @ 0x02048658 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02048658.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_02048658(char *s) { FUN_0204734c(s); *(unsigned int *)s=0x020f9134; *(unsigned int *)(s+0x104)=4096; *(unsigned int *)(s+0x108)=4096; *(unsigned int *)(s+0x10c)=31; *(unsigned int *)(s+0x110)=0; *(unsigned short *)(s+0x114)=0; *(unsigned int *)(s+0x118)=0; return s; }
