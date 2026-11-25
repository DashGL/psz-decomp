// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_15__02127dfc @ 0x02127dfc (code 0x16, pool extent 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy global pair into optional outputs.
 * Field identities remain provisional.
 */
extern char G_0213E7EC[];
void FUN_overlay_15__02127dfc(unsigned int *a,unsigned int *b) {if(a)*a=((unsigned int *)G_0213E7EC)[4];if(b)*b=((unsigned int *)G_0213E7EC)[5];}
