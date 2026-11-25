// FUN_020348d0 @ 0x020348d0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020348d0 @ 0x020348d0 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Read one of three embedded halfwords at +8; return ffff for out-of-range unsigned index.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020348d0.txt.
 */
unsigned int FUN_020348d0(char *self,unsigned int index) { if(index<3) return ((unsigned short *)(self+8))[index]; return 0xffff; }
