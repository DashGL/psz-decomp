// FUN_overlay_15__02132554 @ 0x02132554 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02132554 @ 0x02132554 (code 0x1e, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Mark global receiver active and attach newly scheduled task pointer.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021373d8(unsigned int,void *,void *,unsigned int);
void FUN_overlay_15__02132554(void) {unsigned int **g=(unsigned int **)0x0213e8cc;void *task;((unsigned char *)g[1])[24]=1;task=FUN_overlay_15__021373d8(0,(void *)0x02132625,0,120);g[1][5]=(unsigned int)task;}
