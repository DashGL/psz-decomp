// FUN_overlay_30__0219a44c @ 0x0219a44c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a44c @ 0x0219a44c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Set owner bit sixteen if slot zero is inactive.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
void FUN_overlay_30__0219a44c(void **p) {unsigned int *owner=p[1];if(FUN_02040d2c(owner,0))owner[37]|=0x10000;}
