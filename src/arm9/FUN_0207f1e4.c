// FUN_0207f1e4 @ 0x0207f1e4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f1e4 @ 0x0207f1e4 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset first argument state, then store signed byte one from supplied key into word +8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f1e4.txt.
 */
extern void FUN_0207f1f8(void *);
void FUN_0207f1e4(char *self,signed char *key) { FUN_0207f1f8(self); *(int *)(self+8)=key[1]; }
