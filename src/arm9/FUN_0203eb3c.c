// FUN_0203eb3c @ 0x0203eb3c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203eb3c @ 0x0203eb3c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Read one of two halfwords at +4cc for valid signed index, otherwise ffff.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0203eb3c.txt.
 */
unsigned int FUN_0203eb3c(char *self,int index) { if(index>=0 && index<2) return ((unsigned short *)(self+0x4cc))[index]; return 0xffff; }
