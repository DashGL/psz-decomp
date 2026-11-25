// FUN_overlay_12__0212f388 @ 0x0212f388 (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f388 @ 0x0212f388 (thumb)
// check: 2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned short glyph,b,c,pad; unsigned x,y;} Draw;
extern void FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int);
extern void FUN_overlay_12__0212f0b8(void *,int),FUN_overlay_12__0212f0f4(void *,int),FUN_overlay_12__0212d710(void);
void FUN_overlay_12__0212f388(int *self){
    Draw draw;
    FUN_02071d0c(&draw);FUN_02090b44(&draw);
    FUN_overlay_12__0212f0b8(self,1);FUN_overlay_12__0212d710();
    if(self[61]!=-1 && self[18]>0){
        draw.x=0x33000;draw.y=0xac000;draw.glyph=0;
        FUN_020c32b4(&draw,self[61]);
    }
    if(self[61]!=-1){
        draw.x=0;draw.y=0xac000;draw.glyph=1;
        FUN_020c32b4(&draw,self[61]);
    }
    FUN_overlay_12__0212f0f4(self,1);
}
