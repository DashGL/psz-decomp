// FUN_overlay_15__021361dc @ 0x021361dc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__021361dc @ 0x021361dc (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Select font descriptor and forward draw coordinates, color and glyph to SDK.
 * Field identities remain provisional.
 */
extern int FUN_02017bf0(void *,void *,int,int,unsigned int,unsigned short);
int FUN_overlay_15__021361dc(void *surface,int x,int y,unsigned int color,unsigned short glyph,int index) {return FUN_02017bf0(surface,(char *)*(void **)0x0213e900+index*8,x,y,color,glyph);}
