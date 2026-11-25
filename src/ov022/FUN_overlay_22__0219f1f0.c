// FUN_overlay_22__0219f1f0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_22__0219f1f0 @ 0x0219f1f0
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four-byte record as zero,ff,zero,zero; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_22__0219f1f0(unsigned char *self) { signed char *s=(signed char *)self; s[0]=0; s[1]=0xff; s[2]=0; s[3]=0; return self; }
