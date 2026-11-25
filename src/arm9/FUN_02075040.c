// FUN_02075040 @ 0x02075040 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02075040 @ 0x02075040 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve packed handle and return record first word, or null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075040.txt.
 */
extern void **FUN_0207501c(void *,int);
void *FUN_02075040(void *self,int handle) { void **record=FUN_0207501c(self,handle); if(record) return record[0]; return 0; }
