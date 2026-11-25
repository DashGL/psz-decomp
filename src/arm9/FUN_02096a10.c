// FUN_02096a10 @ 0x02096a10 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02096a10 @ 0x02096a10 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lookup table value from optional child field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096a10.txt.
 */
extern unsigned int FUN_02096424(int); unsigned int FUN_02096a10(void **self) { char *p=self[8]; if(p) return FUN_02096424(*(int *)(p+104)); return 5; }
