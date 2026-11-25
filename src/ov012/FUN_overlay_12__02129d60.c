// FUN_overlay_12__02129d60 @ 0x02129d60 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129d60 @ 0x02129d60 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize compact record, invalidate two selectors and configure fixed category fields.
 * Field identities remain provisional.
 */
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *,int,int,int);
void *FUN_overlay_12__02129d60(char *p) {FUN_02036094(p);*(short *)(p+4)=-1;*(short *)(p+6)=-1;*(int *)(p+8)=0;FUN_020360a4(p,9,1,12);return p;}
