// FUN_overlay_17__02124858 @ 0x02124858 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124858 @ 0x02124858 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop receiver stack and forward value with zero flags to singleton operation.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120de8(void *,unsigned int,unsigned int);
void FUN_overlay_17__02124858(void *p) {unsigned int value=FUN_overlay_17__02123eec(p);void *owner=FUN_overlay_17__02120980();FUN_overlay_17__02120de8(owner,value,0);}
