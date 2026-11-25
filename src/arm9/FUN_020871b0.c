// FUN_020871b0 @ 0x020871b0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020871b0 @ 0x020871b0 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize one hundred records and clear two count fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020871b0.txt.
 */
extern void FUN_0203955c(void *); void FUN_020871b0(char *self) { int i; for(i=0;i<100;i++) FUN_0203955c(self+16*i); *(unsigned int *)(self+1600)=0; *(unsigned int *)(self+2932)=0; }
