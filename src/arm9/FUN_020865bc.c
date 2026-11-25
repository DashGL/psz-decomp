// FUN_020865bc @ 0x020865bc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020865bc @ 0x020865bc (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two words, unsigned halfword and signed halfword; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020865bc.txt.
 */
typedef struct Record { unsigned int a,b; unsigned short c; short d; } Record;
void *FUN_020865bc(Record *dst,Record *src) { dst->a=src->a; dst->b=src->b; dst->c=src->c; dst->d=src->d; return dst; }
