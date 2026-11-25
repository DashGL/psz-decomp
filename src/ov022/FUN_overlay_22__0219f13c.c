// FUN_overlay_22__0219f13c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_22__0219f13c @ 0x0219f13c (code 0xe, pool extent 0xe, thumb)
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four-byte record as zero,ff,zero,zero; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_22__0219f13c(signed char *self) { self[0]=0; self[1]=-1; self[2]=0; self[3]=0; return self; }
