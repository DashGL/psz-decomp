// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// FUN_overlay_12__0212d598 @ 0x0212d598, verified extent 0xa4.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213b25c[];
// FUN_overlay_12__0212d598 @ 0x0212d598 (thumb)
// flags: -O4,s
typedef struct {unsigned x,y;} Point;
typedef struct {unsigned short glyph,b,c,pad;unsigned x,y;} Draw;
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_02079114(void);
extern void FUN_02079160(void *,const Point *,int,int,int,int,int,int,int);
extern void FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int);
void FUN_overlay_12__0212d598(int glyph,int number,int mode){
    unsigned y=0x26000;
    int handle;
    Point position;
    Draw draw;
    if(mode)y+=0xc0000;
    handle=FUN_overlay_12__02131ad0(1);
    position=*(Point *)((unsigned int)DAT_0213b25c + 40u);
    position.y=y;
    FUN_02079160(FUN_02079114(),&position,2,3,number,handle,-1,8,0);
    FUN_02071d0c(&draw);FUN_02090b44(&draw);
    draw.x=0xf0000;draw.y=y;draw.glyph=2;
    FUN_020c32b4(&draw,handle);
    draw.x=0x9d000;draw.y=0x24000;
    if(mode)draw.y+=0xc0000;
    draw.glyph=glyph;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
}
