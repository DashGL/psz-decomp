// FUN_overlay_29__02198e7c @ 0x02198e7c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198e7c @ 0x02198e7c (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Install resident dispatch table and clear two payload words; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_29__02198e7c(unsigned int *self) { self[0]=0x020f6fb0; self[1]=0; self[2]=0; return self; }
