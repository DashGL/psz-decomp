// FUN_02048fb4 @ 0x02048fb4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048fb4 @ 0x02048fb4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/02048fb4.txt.
 */
extern void FUN_02047624(void *);
void *FUN_02048fb4(char *s) { FUN_02047624(s); *(unsigned int *)s=0x020f9074; *(unsigned int *)(s+0x10c)=0; *(unsigned int *)(s+0x110)=0; *(unsigned int *)(s+0x114)=0; *(unsigned int *)(s+0x118)=0; return s; }
