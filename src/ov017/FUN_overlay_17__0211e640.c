// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_17__0211e640 @ 0x0211e640 (code 0x12, pool extent 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Clear thirty-two global slots.
 * Field identities remain provisional.
 */
extern char G_02126AC8[];
void FUN_overlay_17__0211e640(void) {int i;for(i=0;i<32;i++)((unsigned int *)G_02126AC8)[i]=0;}
