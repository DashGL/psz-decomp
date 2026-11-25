// FUN_0207f1c4 @ 0x0207f1c4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207f1c4 @ 0x0207f1c4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional owned bit-storage object and free it; clear slot and return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f1c4.txt.
 */
extern void FUN_0207f060(void *), FUN_020ba8ac(void *);
void *FUN_0207f1c4(void **self) { void *object=*self; if(object) { if(object) { FUN_0207f060(object); FUN_020ba8ac(object); } *self=0; } return self; }
