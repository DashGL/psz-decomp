// FUN_overlay_23__0219c6d4 @ 0x0219c6d4 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219c6d4 @ 0x0219c6d4 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation once and select repetition count from child type.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219c6d4(int *p) {if(!p[12]){int *c=(int *)p[1];FUN_02040c0c(c,0,6,4096,0);p[12]=1;if(**(signed char **)c[5]==57)p[10]=3;else p[10]=1;}}
