// FUN_overlay_29__021988b0 @ 0x021988b0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_29__021988b0 @ 0x021988b0 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Run owner update for zero selector when local guard field is clear.
 * Field identities remain provisional.
 */
extern void FUN_overlay_29__02198c8c(void *);
void FUN_overlay_29__021988b0(char *p,int selector) { if(selector==0 && *(unsigned int *)(p+0xe8)==0)FUN_overlay_29__02198c8c(p); }
