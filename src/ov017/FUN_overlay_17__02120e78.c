// FUN_overlay_17__02120e78 @ 0x02120e78 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120e78 @ 0x02120e78 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Forward child operation with normalized flag bit one.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__021204a8(void *,int,int);
void FUN_overlay_17__02120e78(unsigned int *p,int value,unsigned int flags) {void *child=(void *)p[4];if(child)FUN_overlay_17__021204a8(child,value,(flags&2)!=0);}
