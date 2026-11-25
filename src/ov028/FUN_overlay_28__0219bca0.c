// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_28__0219bca0 @ 0x0219bca0 (code 0x18, pool extent 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize module word then apply three-pointer resident operation with aliased sources.
 * Field identities remain provisional.
 */
extern char G_0219C0FC[]; extern char G_0219C100[];
extern void FUN_02042960(void *,unsigned int),FUN_020bc5cc(void *,void *,void *);
void FUN_overlay_28__0219bca0(void) { FUN_02042960((void *)G_0219C100,0x4000); FUN_020bc5cc((void *)G_0219C0FC,(void *)G_0219C100,(void *)G_0219C100); }
