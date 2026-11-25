// FUN_overlay_11__021227b4 @ 0x021227b4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__021227b4 @ 0x021227b4 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Look up child handle and set child selection, recording successful request.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_11__0211ff28(unsigned int);
extern void FUN_overlay_11__0211ffe4(void *,int);
void FUN_overlay_11__021227b4(unsigned int *p,int value) {void *child=FUN_overlay_11__0211ff28(p[4]);if(child){FUN_overlay_11__0211ffe4(child,value);p[6]=value;}}
