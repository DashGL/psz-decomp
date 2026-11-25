// FUN_overlay_23__0219b408 @ 0x0219b408 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219b408 @ 0x0219b408 (code 0x2a, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation five and initialize receiver timing words.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219b408(unsigned int *p) {FUN_02040c0c((void *)p[1],0,5,4096,0);p[3]=0;p[5]=*(unsigned int *)0x020fc988;p[6]=*(unsigned int *)0x020ed09c;}
