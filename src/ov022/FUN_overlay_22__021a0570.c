// FUN_overlay_22__021a0570 @ 0x021a0570 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0570 @ 0x021a0570 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Write three output fields in original order; return last halfword.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_22__021a0570(char *p,unsigned int *a,unsigned int *b,unsigned short *c) { unsigned int value; *a=*(unsigned int *)(p+0x54); *b=*(unsigned int *)(p+0x58); value=*(unsigned short *)(p+0x5c); *c=value; return value; }
