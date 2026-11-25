// FUN_overlay_7__0211fc58 @ 0x0211fc58 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211fc58 @ 0x0211fc58 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Return selected enabled-bit index among low two flags.
 * Field identities remain provisional.
 */
int FUN_overlay_7__0211fc58(unsigned int *p) {unsigned int remaining=p[1];int i;for(i=0;i<2;i++){if(p[40]&(1U<<i)){if(!remaining)break;remaining--;}}return i;}
