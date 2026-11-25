// FUN_overlay_14__0211fe8c @ 0x0211fe8c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fe8c @ 0x0211fe8c (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Restore receiver table, release global child and ensure resident singleton exists.
 * Field identities remain provisional.
 */
extern void FUN_overlay_14__0211e668(void);
extern void FUN_020907d4(void);
void *FUN_overlay_14__0211fe8c(unsigned int *p) {p[0]=0x021220b0;FUN_overlay_14__0211e668();FUN_020907d4();return p;}
