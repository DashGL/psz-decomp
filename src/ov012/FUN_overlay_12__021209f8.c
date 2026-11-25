// FUN_overlay_12__021209f8 @ 0x021209f8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__021209f8 @ 0x021209f8 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize receiver table then clear three state words.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__021209d8(void *);
void *FUN_overlay_12__021209f8(unsigned int *p) {FUN_overlay_12__021209d8(p);p[0]=0x0213d3b4;p[1]=0;p[2]=0;p[3]=0;return p;}
