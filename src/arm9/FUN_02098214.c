// FUN_02098214 @ 0x02098214 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02098214 @ 0x02098214 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store signed current value into bounded category index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098214.txt.
 */
extern void *FUN_02099444(void);extern int FUN_02099de0(void *,int);void FUN_02098214(char *self,int kind,int index){if(kind>=0 && kind<5){int count=FUN_02099de0(FUN_02099444(),kind);if(index>=0 && index<count)(*(short **)(self+80+4*kind))[index]=*(short *)(self+116);}}
