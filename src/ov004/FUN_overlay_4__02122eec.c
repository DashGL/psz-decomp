// FUN_overlay_4__02122eec @ 0x02122eec (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122eec @ 0x02122eec (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize small render descriptor and draw selected resource at fixed coordinates.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(const void *,int);
void FUN_overlay_4__02122eec(int *p) {struct {short a,b,c,pad;int x,y;} record;FUN_02071d0c(&record);record.a=14;record.x=65536;record.y=958464;FUN_020c32b4(&record,p[29]);}
