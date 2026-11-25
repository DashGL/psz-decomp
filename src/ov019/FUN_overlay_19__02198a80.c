// FUN_overlay_19__02198a80 @ 0x02198a80 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198a80 @ 0x02198a80 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Store owner flag; on zero invoke optional resident object virtual method.
 * Field identities remain provisional.
 */
typedef void (*Method)(void *);
void FUN_overlay_19__02198a80(unsigned int *p,unsigned int value) { void *object; p[95]=value; if(!p[95]) { object=*(void **)0x02108d04; if(object)((Method *)(*(void **)object))[46](object); } }
