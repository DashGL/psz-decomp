// FUN_020500e8 @ 0x020500e8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_020500e8 @ 0x020500e8 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/020500e8.txt.
 */
extern void FUN_0204b398(void *);
void FUN_020500e8(char *s,unsigned int a,unsigned int b,unsigned int c,unsigned int d) { FUN_0204b398(s); *(unsigned int *)(s+0xe0)=3; *(unsigned int *)(s+0x100)=a; *(unsigned int *)(s+0x104)=b; *(unsigned int *)(s+0x108)=c; *(unsigned int *)(s+0x10c)=d; }
