// FUN_020422e0 @ 0x020422e0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020422e0 @ 0x020422e0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Set flag bit 5, preserve low 12 bits of word +28, and install input low byte as top byte.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020422e0.txt.
 */
void *FUN_020422e0(unsigned int *self,unsigned int value) { self[1]|=32; self[10]=(self[10]&0xfff)|(value<<24); return self; }
