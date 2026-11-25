// FUN_overlay_17__0211e828 @ 0x0211e828 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e828 @ 0x0211e828 (code 0x16, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base receiver, replace table and clear final state word.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_17__0211faac(void *);
void *FUN_overlay_17__0211e828(unsigned int *p) {FUN_overlay_17__0211faac(p);p[0]=0x02124fa8;p[2809]=0;return p;}
