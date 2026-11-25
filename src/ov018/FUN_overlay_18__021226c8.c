// FUN_overlay_18__021226c8 @ 0x021226c8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_18__021226c8 @ 0x021226c8 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Look up indexed child and apply selection, saving requested value.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_18__0211f920(unsigned int);
extern void FUN_overlay_18__0211f9dc(void *,int);
void FUN_overlay_18__021226c8(unsigned int *p,int value) {void *child=FUN_overlay_18__0211f920(p[4]);if(child){FUN_overlay_18__0211f9dc(child,value);p[6]=value;}}
