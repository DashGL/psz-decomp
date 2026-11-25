// FUN_02085e0c @ 0x02085e0c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02085e0c @ 0x02085e0c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy leading word and two four-word record blocks.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085e0c.txt.
 */
typedef struct { unsigned int words[4]; } Block; typedef struct { unsigned int first; Block a,b; } Record; Record *FUN_02085e0c(Record *self,Record *source) { self->first=source->first; self->a=source->a; self->b=source->b; return self; }
