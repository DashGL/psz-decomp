// FUN_overlay_12__02120b4c @ 0x02120b4c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120b4c @ 0x02120b4c (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and construct child from receiver option, then attach it.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__021354a4(void *,unsigned int);
void FUN_overlay_12__02120b4c(unsigned int *p) {void *child=FUN_020ba894(28);if(child)child=FUN_overlay_12__021354a4(child,p[2]);p[1]=(unsigned int)child;}
