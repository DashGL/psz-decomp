// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x30 exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-small-diff-next-semantic.json
// FUN_overlay_4__0212c6f4 @ 0x0212c6f4 (code 0x2c, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Clear and configure optional display, then mark receiver active.
 * Field identities remain provisional.
 */
extern void FUN_020c2c4c(void *);
extern void FUN_020c2bfc(void *,const void *,int,int,int);
extern void FUN_overlay_4__0212c6f0(void *,int);
void FUN_overlay_4__0212c6f4(void **p) {if(p[1]){FUN_020c2c4c(p[1]);FUN_020c2bfc(p[1],(void *)0x0212ec4c,7,3,5);FUN_overlay_4__0212c6f0(p,1);}}
