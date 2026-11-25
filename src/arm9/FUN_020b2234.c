// FUN_020b2234 @ 0x020b2234 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020b2234 @ 0x020b2234 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Copy two signed halfwords and a word; return destination.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
typedef struct Record { short x,y; unsigned int value; } Record;
Record *FUN_020b2234(Record *dst, const Record *src) {
    dst->x=src->x; dst->y=src->y; dst->value=src->value; return dst;
}
