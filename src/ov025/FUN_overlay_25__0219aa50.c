// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_25__0219aa50 @ 0x0219aa50 (code 0x18, pool extent 0x20, thumb)
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize module word then apply three-pointer resident operation with aliased sources.
 * Field identities remain provisional.
 */
extern void FUN_02042960(void *,unsigned int),FUN_020bc5cc(void *,void *,void *);
extern char D_0219ad38[], D_0219ad3c[];
void FUN_overlay_25__0219aa50(void) { FUN_02042960(D_0219ad38,0x4000); FUN_020bc5cc(D_0219ad3c,D_0219ad38,D_0219ad38); }
