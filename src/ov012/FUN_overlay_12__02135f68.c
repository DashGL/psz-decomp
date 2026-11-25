// FUN_overlay_12__02135f68 @ 0x02135f68 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135f68 @ 0x02135f68 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four-byte packet with shifted incoming selector.
 * Field identities remain provisional.
 */
void FUN_overlay_12__02135f68(unsigned char *p,unsigned int value) {p[0]=3;p[1]=3;p[2]=value+19;p[3]=0;}
