// FUN_0203cfc4 @ 0x0203cfc4 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203cfc4 @ 0x0203cfc4 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Store truncated halfword at +86; adjusted receiver remains in r0.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/0203cfc4.txt.
 */
void FUN_0203cfc4(char *self,unsigned int value) { *(unsigned short *)(self+0x86)=value; }
