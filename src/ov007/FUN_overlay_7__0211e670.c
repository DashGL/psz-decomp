// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_7__0211e670 @ 0x0211e670 (code 0x1a, pool extent 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve indexed global identifier below signed limit into resident record pointer.
 * Field identities remain provisional.
 */
extern char G_0211FED8[]; extern char G_0211FEF4[];
extern void *FUN_020c1138(int);
void *FUN_overlay_7__0211e670(int index) {if(index<((int *)G_0211FED8)[6])return FUN_020c1138(((int *)G_0211FEF4)[index]);return 0;}
