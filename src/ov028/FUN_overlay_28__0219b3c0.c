// FUN_overlay_28__0219b3c0 @ 0x0219b3c0 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b3c0 @ 0x0219b3c0 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Apply fallback state, reset tick and invalidate selection for event category three.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,int);
void FUN_overlay_28__0219b3c0(unsigned int *p,const signed char *record,unsigned int unused,int event) {if(event!=-1)FUN_02037910(p,p[14]);p[23]=0;if(record[12]==3)p[20]=-1;}
