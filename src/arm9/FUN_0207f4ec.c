// FUN_0207f4ec @ 0x0207f4ec (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f4ec @ 0x0207f4ec (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store initial word and reset embedded records; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f4ec.txt.
 */
extern void FUN_0207f4fc(void *);
void *FUN_0207f4ec(unsigned int *self,unsigned int value) { *self=value; FUN_0207f4fc(self); return self; }
