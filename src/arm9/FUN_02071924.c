// FUN_02071924 @ 0x02071924 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071924 @ 0x02071924 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set word+280 from global object then reset twenty records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071924.txt.
 */
extern void *FUN_02077f3c(void); extern unsigned int FUN_020780b0(void *); extern void FUN_02071948(void *); void FUN_02071924(char *self) { int i; *(unsigned int *)(self+640)=FUN_020780b0(FUN_02077f3c()); for(i=0;i<20;i++) FUN_02071948(self+32*i); }
