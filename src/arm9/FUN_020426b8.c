// FUN_020426b8 @ 0x020426b8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020426b8 @ 0x020426b8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Copy embedded triple +78 to +84, clear +f0, and set word +ec to two.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/020426b8.txt.
 */
extern void FUN_02034680(void *,void *);
void FUN_020426b8(char *self) { FUN_02034680(self+0x84,self+0x78); *(unsigned int *)(self+0xf0)=0; *(unsigned int *)(self+0xec)=2; }
