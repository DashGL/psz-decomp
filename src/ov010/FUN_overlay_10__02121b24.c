// FUN_overlay_10__02121b24 @ 0x02121b24 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121b24 @ 0x02121b24 (thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned short glyph,b,c,pad; unsigned x,y;} Draw;
#pragma thumb off
extern void FUN_020144f0(void),FUN_02014714(void);
#pragma thumb on
extern void FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int),FUN_0208971c(void *,const void *);
void FUN_overlay_10__02121b24(int *self){
    Draw draw;
    if(self[33]&1){
        FUN_020144f0();
        draw.glyph=0;draw.b=0;draw.c=0;
        FUN_02090b44(&draw);FUN_0208971c(&draw.x,(void *)0x02122380);
        draw.glyph=0;FUN_020c32b4(&draw,self[2]);
        FUN_02090b44(&draw);FUN_0208971c(&draw.x,(void *)0x02122370);
        draw.glyph=1;FUN_020c32b4(&draw,self[2]);
        if(!(self[33]&2)){
            FUN_02090b44(&draw);FUN_0208971c(&draw.x,(void *)0x02122378);
            draw.glyph=2;FUN_020c32b4(&draw,self[2]);
        }
        FUN_02014714();
    }
}
