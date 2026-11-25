// FUN_020387ac @ 0x020387ac (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020387ac @ 0x020387ac (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Test word +e8 equals two.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020387ac.txt.
 */
int FUN_020387ac(char *self) { return *(unsigned int *)(self+0xe8)==2; }
