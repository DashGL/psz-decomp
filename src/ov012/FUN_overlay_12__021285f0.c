// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets.
// FUN_overlay_12__021285f0 @ 0x021285f0
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return field only when state word +8 is zero.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__021285f0(unsigned int *self) { if(self[2]==0) return self[12]; else return 0; }
