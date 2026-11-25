// FUN_02095880 @ 0x02095880 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02095880 @ 0x02095880 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy selector bytes, set two dirty flags and refresh.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095880.txt.
 */
extern void FUN_02094ee0(void *); void FUN_02095880(char *self,signed char *source) { self[700]=source[0]; self[701]=source[1]; self[510]=1; self[509]=1; FUN_02094ee0(self); }
