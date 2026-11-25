// FUN_overlay_15__02135af8 @ 0x02135af8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02135af8 @ 0x02135af8 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Take buffer from indexed queue, populate sprite records and return buffer.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__02136e44(unsigned int);
extern void FUN_overlay_15__02135aac(unsigned int,unsigned int,void *);
void *FUN_overlay_15__02135af8(unsigned int bank,unsigned int index) {void *p=FUN_overlay_15__02136e44(bank);FUN_overlay_15__02135aac(bank,index,p);return p;}
