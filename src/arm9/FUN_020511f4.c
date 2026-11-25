// FUN_020511f4 @ 0x020511f4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_020511f4 @ 0x020511f4 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Subtract four with word wrap and bounds-check signed index before returning 8-byte table record.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/020511f4.txt.
 */
void *FUN_020511f4(char *self,unsigned int value) { int index=(int)(value-4); if(index>=0 && index<**(int **)(self+20)) return *(char **)(self+16)+8*index; return 0; }
