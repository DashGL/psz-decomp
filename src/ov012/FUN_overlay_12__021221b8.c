// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// FUN_overlay_12__021221b8 @ 0x021221b8
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int data_0213ec9c[];
typedef struct {unsigned short glyph,b,c,pad; unsigned x,y;} Draw;
extern int FUN_020bbf94(unsigned);
extern void FUN_overlay_12__02122440(void *,int),FUN_overlay_12__02122518(void *,int);
extern void FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,void *);
void FUN_overlay_12__021221b8(void *self){
    int base=data_0213ec9c[1];
    int count=base;
    Draw draw;
    if(data_0213ec9c[2]>0) count=base+1;
    if(FUN_020bbf94(64) && count>0) FUN_overlay_12__02122440(self,count-1);
    else if(FUN_020bbf94(128) && count>0) FUN_overlay_12__02122518(self,count-1);
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    if(((signed char *)self)[4]>=base){
        draw.glyph=2;draw.x=0xb000;draw.y=0x8b000;
    }else{
        draw.glyph=1;draw.x=0xb000;draw.y=(unsigned)((signed char *)self)[4]*0x12000+0x41000;
    }
    FUN_020c32b4(&draw,*(void **)self);
}
