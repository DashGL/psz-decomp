// FUN_02048344 @ 0x02048344 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048344 @ 0x02048344 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Install dispatch table, clear word +4, then clear three pairs of words in parallel arrays.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02048344.txt.
 */
void *FUN_02048344(unsigned int *self) { int i; self[0]=0x020f8fa4; self[1]=0; for(i=0;i<3;i++) { self[i+2]=0; self[i+5]=0; } return self; }
