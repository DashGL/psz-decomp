// FUN_02072f2c @ 0x02072f2c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072f2c @ 0x02072f2c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset record through helper then clear words +4/+8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072f2c.txt.
 */
extern void FUN_02072f3c(void *);
void FUN_02072f2c(unsigned int *self) { FUN_02072f3c(self); self[1]=0; self[2]=0; }
