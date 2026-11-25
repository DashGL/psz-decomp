// FUN_02050050 @ 0x02050050 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_02050050 @ 0x02050050 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02050050.txt.
 */
extern void FUN_0204add0(void *);
void *FUN_02050050(char *s) { FUN_0204add0(s); *(unsigned int *)s=0x020f929c; *(unsigned int *)(s+0x100)=0; *(unsigned int *)(s+0x104)=0; *(unsigned int *)(s+0x108)=0; *(unsigned int *)(s+0x10c)=0; *(unsigned int *)(s+0x110)=0; return s; }
