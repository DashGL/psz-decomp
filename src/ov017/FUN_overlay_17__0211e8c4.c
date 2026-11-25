// FUN_overlay_17__0211e8c4 @ 0x0211e8c4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e8c4 @ 0x0211e8c4 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Release optional pointer-to-pointer allocation and clear it.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
void FUN_overlay_17__0211e8c4(void *unused,void **p) {if(p && *p){FUN_020ba8c4(*p);*p=0;}}
