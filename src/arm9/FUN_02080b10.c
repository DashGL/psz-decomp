// FUN_02080b10 @ 0x02080b10 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02080b10 @ 0x02080b10 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For nonnull record clear byte +15, resolve first word, store result at +4.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080b10.txt.
 */
extern void *FUN_020ba440(unsigned int);
void FUN_02080b10(char *self) { if(self) { self[21]=0; *(void **)(self+4)=FUN_020ba440(*(unsigned int *)self); } }
