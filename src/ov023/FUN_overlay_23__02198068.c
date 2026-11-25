// FUN_overlay_23__02198068 @ 0x02198068 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198068 @ 0x02198068 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize flag and sign-extend source halfword into following field.
 * Field identities remain provisional.
 */
void FUN_overlay_23__02198068(char *p) { *(unsigned int *)(p+0xd4)=1; *(int *)(p+0xd8)=*(short *)(p+0x2c); }
