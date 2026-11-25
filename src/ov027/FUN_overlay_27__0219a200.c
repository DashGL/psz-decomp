// FUN_overlay_27__0219a200 @ 0x0219a200 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219a200 @ 0x0219a200 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation zero, clear activity flag and enable movement flag.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02036ed0(void *,int);
extern void FUN_02037558(void *);
void FUN_overlay_27__0219a200(void **p) {void *child=p[1];FUN_02040c0c(child,0,0,4096,0);FUN_02036ed0(child,1);FUN_02037558(child);}
