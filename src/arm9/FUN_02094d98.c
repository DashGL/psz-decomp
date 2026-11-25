// FUN_02094d98 @ 0x02094d98 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02094d98 @ 0x02094d98 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run two helpers then set bit 27 in word +f8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094d98.txt.
 */
extern void FUN_02094eb8(void *),FUN_0203b570(void *); void FUN_02094d98(char *self) { FUN_02094eb8(self); FUN_0203b570(self); *(unsigned int *)(self+248)|=0x08000000; }
