// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_11__021213d0 @ 0x021213d0 (code 0x14, pool extent 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Increment unsigned inclusive-range counter or wrap zero, then return stored value.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_11__021213d0(unsigned int *self) { if(self[0]<self[1]) self[0]++; else self[0]=0; return self[0]; }
