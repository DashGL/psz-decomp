// FUN_0203e53c @ 0x0203e53c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e53c @ 0x0203e53c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Clear word +f8 bit five and word +250 bit three; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203e53c.txt.
 */
void *FUN_0203e53c(char *self) { *(unsigned int *)(self+0xf8)&=~32u; *(unsigned int *)(self+0x250)&=~8u; return self; }
