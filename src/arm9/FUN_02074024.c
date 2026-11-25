// FUN_02074024 @ 0x02074024 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074024 @ 0x02074024 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume nonzero signed event byte and optionally copy two word values.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074024.txt.
 */
int FUN_02074024(signed char *self,unsigned int *a,unsigned int *b) { int result=0,flag=self[32]; if(flag) { result=flag; if(a) *a=*(unsigned int *)(self+36); if(b) *b=*(unsigned int *)(self+40); self[32]=0; } return result; }
