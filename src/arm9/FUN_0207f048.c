// FUN_0207f048 @ 0x0207f048 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f048 @ 0x0207f048 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four words then initialize bit storage using forwarded capacity; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f048.txt.
 */
extern void FUN_0207f154(void *,unsigned int);
void *FUN_0207f048(unsigned int *self,unsigned int capacity) { self[0]=0; self[1]=0; self[2]=0; self[3]=0; FUN_0207f154(self,capacity); return self; }
