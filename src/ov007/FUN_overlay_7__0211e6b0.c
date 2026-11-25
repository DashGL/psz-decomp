// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_7__0211e6b0 @ 0x0211e6b0 (code 0x14, pool extent 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Read signed-indexed global table below stored limit without lower bound.
 * Field identities remain provisional.
 */
extern char G_0211FED8[]; extern char G_021200F4[];
unsigned int FUN_overlay_7__0211e6b0(int index) {if(index<((int *)G_0211FED8)[6])return ((unsigned int *)G_021200F4)[index];return 0;}
