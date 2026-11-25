// FUN_0204e5f4 @ 0x0204e5f4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e5f4 @ 0x0204e5f4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Copy three unsigned halfwords and final signed halfword; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0204e5f4.txt.
 */
typedef struct Record { unsigned short a,b,c; short d; } Record;
Record *FUN_0204e5f4(Record *dst,const Record *src) { dst->a=src->a; dst->b=src->b; dst->c=src->c; dst->d=src->d; return dst; }
