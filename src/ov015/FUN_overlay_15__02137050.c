// FUN_overlay_15__02137050 @ 0x02137050 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02137050 @ 0x02137050 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Unlink task and return it to pool chosen by address boundary.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02136d24(void *);
extern void FUN_overlay_15__02135b98(void *,void *);
void FUN_overlay_15__02137050(void *task) {unsigned char *base;int index=0;FUN_overlay_15__02136d24(task);base=*(unsigned char **)0x0213e92c;if((unsigned int)task>=(unsigned int)(base+416))index=1;FUN_overlay_15__02135b98(*(void **)(base+index*416+412),task);}
