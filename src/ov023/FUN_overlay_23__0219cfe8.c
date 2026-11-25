// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_23__0219cfe8 @ 0x0219cfe8 (code 0x20, pool extent 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two module words then apply resident operation to aliased sources.
 * Field identities remain provisional.
 */
extern char G_0219D678[]; extern char G_0219D67C[]; extern char G_0219D680[];
extern void FUN_02042960(void *,unsigned int),FUN_020bc5cc(void *,void *,void *);
void FUN_overlay_23__0219cfe8(void) { FUN_02042960((void *)G_0219D680,0x66); FUN_02042960((void *)G_0219D67C,0x1000); FUN_020bc5cc((void *)G_0219D678,(void *)G_0219D67C,(void *)G_0219D67C); }
