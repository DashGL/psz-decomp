// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// FUN_overlay_18__0211e66c @ 0x0211e66c (code 0x12, pool extent 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Decrement cyclic unsigned counter or reload bound.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_18__0211e66c(unsigned int *p) {unsigned int value=p[0];if(value)value--;else value=p[1];p[0]=value;return *(volatile unsigned int *)p;}
