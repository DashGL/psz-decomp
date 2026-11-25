// FUN_overlay_14__0211fea4 @ 0x0211fea4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fea4 @ 0x0211fea4 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table, release global child, ensure singleton, then release receiver storage.
 * Field identities remain provisional.
 */
extern void FUN_overlay_14__0211e668(void);
extern void FUN_020907d4(void);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_14__0211fea4(unsigned int *p) {p[0]=0x021220b0;FUN_overlay_14__0211e668();FUN_020907d4();FUN_020ba8ac(p);return p;}
