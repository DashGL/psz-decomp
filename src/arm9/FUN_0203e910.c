// FUN_0203e910 @ 0x0203e910 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e910 @ 0x0203e910 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Return indexed 48-byte embedded record +368 if global manager exists and unsigned index below four.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203e910.txt.
 */
extern void *DAT_02108d08;
void *FUN_0203e910(char *self,unsigned int index) { if(DAT_02108d08 && index<4) return self+0x368+48*index; return 0; }
