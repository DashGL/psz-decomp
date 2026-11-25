// FUN_0207f12c @ 0x0207f12c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207f12c @ 0x0207f12c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve bit index and mask if backing storage and unsigned capacity valid.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f12c.txt.
 */
int FUN_0207f12c(unsigned int *self,unsigned int *word,unsigned int *mask,unsigned int bit) { if(!self[0]) return 0; if(self[1]<=bit) return 0; *word=bit>>5; *mask=1u<<(bit&31); return 1; }
