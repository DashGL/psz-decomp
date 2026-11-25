// FUN_02030d74 @ 0x02030d74 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030d74 @ 0x02030d74 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Install dispatch word, store input word and clear final word; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02030d74.txt.
 */
void *FUN_02030d74(unsigned int *self,unsigned int value) { self[0]=0x020f6c1c; self[1]=value; self[2]=0; return self; }
