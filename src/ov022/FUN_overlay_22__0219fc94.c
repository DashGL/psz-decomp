// FUN_overlay_22__0219fc94 @ 0x0219fc94 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219fc94 @ 0x0219fc94 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize state, sentinel, two vectors and trailing word.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,int,int,int);
int *FUN_overlay_22__0219fc94(int *p) {p[0]=2;p[1]=-1;FUN_02035408(p+2,0,0,0);FUN_02035408(p+5,0,0,0);p[8]=0;return p;}
