// FUN_0203f1f0 @ 0x0203f1f0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203f1f0 @ 0x0203f1f0 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Return one of four embedded six-byte records at +4a8 only when global manager exists.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/0203f1f0.txt.
 */
extern void *DAT_02108d08;
void *FUN_0203f1f0(char *self,unsigned int index) { if(DAT_02108d08 && index<4) return self+0x4a8+6*index; return 0; }
