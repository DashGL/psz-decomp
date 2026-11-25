// FUN_02041bb8 @ 0x02041bb8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041bb8 @ 0x02041bb8 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Read optional child halfword +10, otherwise 7fff.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02041bb8.txt.
 */
unsigned int FUN_02041bb8(char *self) { char *child=*(char **)(self+4); if(child) return *(unsigned short *)(child+16); return 0x7fff; }
