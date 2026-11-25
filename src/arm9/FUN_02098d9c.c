// FUN_02098d9c @ 0x02098d9c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02098d9c @ 0x02098d9c (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update resolved player position and clear two flags before refresh.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098d9c.txt.
 */
extern char *FUN_02098558(void *); extern void FUN_02037ff0(void *,void *),FUN_0209882c(void *); void FUN_02098d9c(void *self,void *vector) { char *p=FUN_02098558(self); if(p) { FUN_02037ff0(p,vector); *(unsigned int *)(p+692)&=~2u; *(unsigned int *)(p+692)&=~1u; FUN_0209882c(self); } }
