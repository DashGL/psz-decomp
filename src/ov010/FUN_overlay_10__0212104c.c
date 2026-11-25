// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_10__0212104c @ 0x0212104c
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Test module global word +c for nonzero.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned int data_02122da4[];
int FUN_overlay_10__0212104c(void) { return data_02122da4[3]!=0; }
