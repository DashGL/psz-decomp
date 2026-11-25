// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_11__0211ff28 @ 0x0211ff28
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_02124a8c[];
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Return module table entry for unsigned index below 32, otherwise zero.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_11__0211ff28(unsigned int index) { if(index>=32) return 0; return D_02124a8c[index]; }
