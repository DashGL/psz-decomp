// FUN_02030d5c @ 0x02030d5c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030d5c @ 0x02030d5c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Copy three signed bytes followed by one unsigned byte; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02030d5c.txt.
 */
typedef struct Record { signed char a,b,c; unsigned char d; } Record;
Record *FUN_02030d5c(Record *dst,const Record *src) { dst->a=src->a; dst->b=src->b; dst->c=src->c; dst->d=src->d; return dst; }
