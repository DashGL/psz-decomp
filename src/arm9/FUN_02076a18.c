// FUN_02076a18 @ 0x02076a18 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076a18 @ 0x02076a18 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release receiver identifier through global manager for child tag one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076a18.txt.
 */
extern void *FUN_02034b78(void); extern void FUN_02035144(void *,int); void FUN_02076a18(unsigned int *self) { signed char *child=(signed char *)self[1]; if(child[18]==1) { void *p=FUN_02034b78(); if(p) { FUN_02035144(p,self[29]); self[29]=-1; } } }
