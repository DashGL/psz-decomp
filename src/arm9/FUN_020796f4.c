// FUN_020796f4 @ 0x020796f4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020796f4 @ 0x020796f4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three halfwords and two words, preserving padding halfword +6; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020796f4.txt.
 */
typedef struct Record { unsigned short a,b,c,pad; unsigned int x,y; } Record;
void *FUN_020796f4(Record *dst,Record *src) { dst->a=src->a; dst->b=src->b; dst->c=src->c; dst->x=src->x; dst->y=src->y; return dst; }
