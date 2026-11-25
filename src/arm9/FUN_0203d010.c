// FUN_0203d010 @ 0x0203d010 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203d010 @ 0x0203d010 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Call receiver helper for unsigned state below nine excluding zero and four.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203d010.txt.
 */
extern void FUN_020946a0(void *);
void FUN_0203d010(char *self) { unsigned int state=*(unsigned int *)(self+0x240); if(state<9 && state!=0 && state!=4) FUN_020946a0(self); }
