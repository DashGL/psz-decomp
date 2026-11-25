// FUN_02041510 @ 0x02041510 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041510 @ 0x02041510 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Initialize two leading and five following halfwords to invalid ffff; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02041510.txt.
 */
void *FUN_02041510(unsigned short *self) { int i; self[0]=0xffff; self[1]=0xffff; for(i=0;i<5;i++) self[i+2]=0xffff; return self; }
