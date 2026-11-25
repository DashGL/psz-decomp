// FUN_overlay_17__0211ff70 @ 0x0211ff70 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211ff70 @ 0x0211ff70 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Release valid indexed handle and restore all-ones sentinel.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__0211e784(unsigned int);
void FUN_overlay_17__0211ff70(unsigned int *p) {if(*p!=~0U){FUN_overlay_17__0211e784(*p);*p=~0U;}}
