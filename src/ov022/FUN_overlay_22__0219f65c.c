// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_22__0219f65c @ 0x0219f65c (code 0x1c, pool extent 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Clear indexed registry slot only for valid index and exact stored generation handle.
 * Field identities remain provisional.
 */
void FUN_overlay_22__0219f65c(unsigned int **slots,unsigned int handle) { int index=(unsigned short)handle; if(index<20 && slots[index] && slots[index][5]==handle)slots[index]=0; }
