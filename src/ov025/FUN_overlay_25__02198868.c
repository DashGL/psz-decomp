// FUN_overlay_25__02198868 @ 0x02198868 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198868 @ 0x02198868 (code 0x44, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Trigger each parent threshold transition once.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,int);
void FUN_overlay_25__02198868(int *p) {int *q=(int *)p[1];int value=*(short *)((char *)q+24),limit=q[13]*3;if(value>limit){if(!(p[20]&1)){p[20]|=1;FUN_02037910(p,p[13]);}}else if(value*2>limit){if(!(p[20]&2)){p[20]|=2;FUN_02037910(p,p[13]);}}}
