// FUN_020465a8 @ 0x020465a8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020465a8 @ 0x020465a8 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Bounds-check compact table header, derive record region by halfword offset and stride.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/020465a8.txt.
 */
void *FUN_020465a8(unsigned char *self,unsigned int index) { if(self && index<self[1]) { unsigned int offset=*(unsigned short *)(self+6); unsigned int stride=*(unsigned short *)(self+offset); return self+offset+4+stride*index; } return 0; }
