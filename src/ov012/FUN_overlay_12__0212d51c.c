// FUN_overlay_12__0212d51c @ 0x0212d51c (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d51c @ 0x0212d51c (thumb)
// check: 2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG and concrete ABI; constructor slot56 resolves receiver-only29cf8. */
typedef struct {unsigned short glyph,a,b,pad;int x,y;} Draw;extern int FUN_overlay_12__02131ad0(int);extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int);void FUN_overlay_12__0212d51c(int *s,int lower){Draw d;if(s[0]>0){FUN_02071d0c(&d);FUN_02090b44(&d);d.x=0x1b000;d.y=((s[2]-s[3])*16+66)*4096;if(lower)d.y+=0xc0000;d.glyph=12;FUN_020c32b4(&d,FUN_overlay_12__02131ad0(4));}}
