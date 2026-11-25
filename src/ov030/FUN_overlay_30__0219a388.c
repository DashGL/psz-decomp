// FUN_overlay_30__0219a388 @ 0x0219a388 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a388 @ 0x0219a388 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation, copy shared timing word and reset counter.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_30__0219a388(unsigned int *p) {FUN_02040c0c((void *)p[1],0,0,4096,0);p[4]=*(unsigned int *)0x020fc988;p[3]=0;}
