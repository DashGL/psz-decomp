// FUN_020330c4 @ 0x020330c4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_020330c4 @ 0x020330c4 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Test global halfword bit 3.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020330c4.txt.
 */
int FUN_020330c4(void) { return (*(unsigned short *)0x0211a3b8 & 8)!=0; }
