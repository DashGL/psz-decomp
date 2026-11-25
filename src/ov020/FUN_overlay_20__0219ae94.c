// FUN_overlay_20__0219ae94 @ 0x0219ae94 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219ae94 @ 0x0219ae94 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Clear child flag and start animation seven with transition ten.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219ae94(unsigned int *p) {unsigned int *child=(unsigned int *)p[1];child[59]&=~1;FUN_02040c0c(child,0,7,4096,10);p[5]=0;}
