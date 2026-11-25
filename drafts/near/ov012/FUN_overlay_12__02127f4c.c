// near: complete semantics; local coordinate/draw stack scheduling remains.
// check: 2.0/sp2p3 target=0x154 candidate=0x14c words=999 exact_bytes=999 bad_relocs=3
// flags: -O4,s
typedef struct{int x,y;}Pair;
typedef struct{short glyph,a,b,pad;Pair pos;}Draw;
extern const Pair data_02138490[];
extern int FUN_overlay_12__02131ad0(int),FUN_02079114(void),FUN_020b0494(void *);
extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,int),FUN_02079160(int,const Pair *,int,int,int,int,int,int,int);
void FUN_overlay_12__02127f4c(void *unused,void *items,int mode)
{
    Pair alternate2=data_02138490[6],alternate1=data_02138490[5],alternate0=data_02138490[4];
    Pair countpos=data_02138490[3],usedpos=data_02138490[2],markerpos=data_02138490[1],modepos,lastpos;
    Draw marker,modedraw,last;
    int handle=FUN_overlay_12__02131ad0(0),font=FUN_02079114();
    int count=*(short *)((char *)items+8),used=FUN_020b0494(items),digits=2;
    if(count>=100){countpos=alternate2;usedpos=alternate1;markerpos=alternate0;digits=3;}
    FUN_02071d0c(&marker);marker.glyph=10;FUN_0208971c(&marker.pos,&markerpos);FUN_020c32b4(&marker,handle);
    FUN_02079160(font,&countpos,0,digits,count,handle,-1,7,0);
    FUN_02079160(font,&usedpos,0,digits,used,handle,-1,7,0);
    handle=FUN_overlay_12__02131ad0(2);modepos=data_02138490[0];
    FUN_02071d0c(&modedraw);FUN_0208971c(&modedraw.pos,&modepos);
    if(mode==0)modedraw.glyph=10;else if(mode==1)modedraw.glyph=21;else if(mode==2)modedraw.glyph=22;
    FUN_020c32b4(&modedraw,handle);
    handle=FUN_overlay_12__02131ad0(2);lastpos=data_02138490[7];
    FUN_02071d0c(&last);last.glyph=9;FUN_0208971c(&last.pos,&lastpos);FUN_020c32b4(&last,handle);
}
