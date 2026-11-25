// FUN_0203d1ec @ 0x0203d1ec (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203d1ec @ 0x0203d1ec (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Tail-forward embedded +24c and word +fc.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0203d1ec.txt.
 */
extern void FUN_0208da98(void *,unsigned int);
void FUN_0203d1ec(char *self) { FUN_0208da98(self+0x24c,*(unsigned int *)(self+0xfc)); }
