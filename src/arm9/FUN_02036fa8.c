// FUN_02036fa8 @ 0x02036fa8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02036fa8 @ 0x02036fa8 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Call signed two-coordinate helper on input words zero/two and store low halfword at +44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02036fa8.txt.
 */
extern unsigned int FUN_0205c9e4(int,int);
void FUN_02036fa8(char *self,const int *value) { *(unsigned short *)(self+0x44)=FUN_0205c9e4(value[0],value[2]); }
