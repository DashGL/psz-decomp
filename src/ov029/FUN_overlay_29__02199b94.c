// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_29__02199b94 @ 0x02199b94
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0219bd54[];
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Choose module global value for mode one, otherwise owner word +4c.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_29__02199b94(unsigned int *self) { if(self[26]==1) return D_0219bd54[1]; return self[19]; }
