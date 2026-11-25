// FUN_overlay_28__02198c20 @ 0x02198c20 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198c20 @ 0x02198c20 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation zero and disable secondary component flag.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_28__02198c20(void **p) {void *child=p[1];FUN_02040c0c(child,0,0,4096,0);FUN_020445a8(child,0,0);}
