// FUN_overlay_14__021209b8 @ 0x021209b8 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__021209b8 @ 0x021209b8 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete body, aggregate accesses and concrete helper inputs reviewed. */
typedef struct {unsigned short glyph,a,b,pad;int x,y;} Draw;extern void FUN_overlay_14__0212089c(void *),FUN_02090b54(void *,void *,int);extern void *FUN_0209081c(void);void FUN_overlay_14__021209b8(unsigned char *s,int selected){Draw d;void *manager;FUN_overlay_14__0212089c(s);manager=FUN_0209081c();d.glyph=0;d.a=0;d.b=0;d.glyph=0;d.a=0;d.b=0;d.y=0;d.x=0;d.glyph=selected?3:2;d.x=s[5]<<12;d.y=(s[6]+192)<<12;FUN_02090b54(manager,&d,2);}
