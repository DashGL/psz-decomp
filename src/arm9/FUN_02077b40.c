// FUN_02077b40 @ 0x02077b40 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077b40 @ 0x02077b40 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy132-byte record array then count word to output.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077b40.txt.
 */
typedef struct { unsigned int words[33]; } Records; void FUN_02077b40(char *self,char *out) { *(Records *)out=*(Records *)(self+36); *(unsigned int *)(out+132)=*(unsigned int *)(self+168); }
