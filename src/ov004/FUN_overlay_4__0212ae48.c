// FUN_overlay_4__0212ae48 @ 0x0212ae48 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212ae48 @ 0x0212ae48 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Render marker with selection-dependent fixed-point vertical coordinate.
 * Field identities remain provisional.
 */
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__0212ae48(int *p) {struct Descriptor {short a,b,c,pad;int x,y;} d;d.a=0;d.b=0;d.c=0;d.a=0;d.x=196608;d.y=(p[1]*13+310)<<12;FUN_020c32b4(&d,p[2]);}
