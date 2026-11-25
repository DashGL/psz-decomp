// flags: -O4,s
typedef struct {unsigned short glyph,b,z,pad;unsigned x,y;} Draw;
extern char DAT_0211a51c[];
#pragma thumb off
extern void FUN_020144f0(void),FUN_02014714(void);
#pragma thumb on
extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,unsigned),FUN_020c38f0(void *,unsigned),FUN_020c3788(void *,void *,int,int,int),FUN_020c3864(void *,void *,int,int,int),FUN_020b3088(void *,unsigned);
extern unsigned FUN_overlay_11__0211f1f8(void *),FUN_overlay_11__0211f1d0(void *),FUN_02084bd4(void *);
extern int FUN_overlay_11__0211f654(void *);extern unsigned *FUN_overlay_11__0211f17c(void *);
void FUN_overlay_11__0211fa8c(char *self){
    Draw title,background,tab,button,caret,selection,arrows,cursor,special,cover;
    int index,wide,spacing;unsigned x,y,key;
    if(*(unsigned *)(self+164)){
        int flag;
        FUN_020c38f0(self+176,0);
        flag=0;
        if(*(unsigned *)self<=3&&((1U<<*(unsigned *)self)&11))flag=1;
        if(flag==0)FUN_020c3788(self+176,*(void **)(self+140),8,0,2);
        else FUN_020c3864(self+176,*(void **)(self+136),8,0,2);
    }
    FUN_020144f0();
    {
        int w;
        switch(*(unsigned *)self){case 1:case 3:w=1;break;default:w=0;break;}
        if(w){
            FUN_02071d0c(&title);FUN_02090b44(&title);title.x=0x5a000;title.y=0xd8000;title.glyph=12;FUN_020c32b4(&title,*(unsigned *)(self+236));
        }
    }
    FUN_02071d0c(&background);FUN_02090b44(&background);background.x=0x1c000;background.y=0xfa000;background.glyph=0;FUN_020c32b4(&background,FUN_overlay_11__0211f1f8(self));
    FUN_02071d0c(&tab);FUN_02090b44(&tab);tab.x=0x47000;tab.y=0xe6000;if(*(unsigned *)self!=3)tab.glyph=1;else tab.glyph=16;FUN_020c32b4(&tab,*(unsigned *)(self+236));
    FUN_02071d0c(&button);FUN_02090b44(&button);button.x=0x22000;button.y=0x14c000;button.glyph=2;FUN_020c32b4(&button,*(unsigned *)(self+236));
    *(short *)(self+254)=*(short *)(self+254)+1;
    if(*(short *)(self+254)>10){
        index=*(short *)(self+162);if(index>=*(int *)(self+144))index=*(int *)(self+144)-1;
        wide=*(unsigned *)self==1||*(unsigned *)self==3;spacing=wide?10:5;
        FUN_02071d0c(&caret);FUN_02090b44(&caret);caret.x=((unsigned)index*(unsigned)spacing+98+(unsigned)FUN_overlay_11__0211f654(self))<<12;caret.y=0xce000;caret.glyph=wide?18:11;FUN_020c32b4(&caret,*(unsigned *)(self+236));
        if(*(short *)(self+254)>20)*(short *)(self+254)=0;
    }
    FUN_02071d0c(&selection);FUN_02090b44(&selection);selection.x=(*(unsigned *)(self+152)*58+71)<<12;selection.y=0xe6000;selection.glyph=6;FUN_020c32b4(&selection,*(unsigned *)(self+236));
    if(*(unsigned *)self!=3){
        FUN_02071d0c(&arrows);FUN_02090b44(&arrows);
        if(*(short *)(self+252)>0){arrows.x=0xd1000;*(short *)(self+252)=*(short *)(self+252)-1;}else arrows.x=0xcd000;
        arrows.y=0xe7000;arrows.glyph=13;FUN_020c32b4(&arrows,*(unsigned *)(self+236));
        FUN_02090b44(&arrows);
        if(*(short *)(self+252)<0){arrows.x=0x25000;*(short *)(self+252)=*(short *)(self+252)+1;}else arrows.x=0x29000;
        arrows.y=0xe7000;arrows.glyph=14;FUN_020c32b4(&arrows,*(unsigned *)(self+236));
    }
    FUN_02071d0c(&cursor);FUN_02090b44(&cursor);x=FUN_overlay_11__0211f17c(self)[3];y=FUN_overlay_11__0211f17c(self)[4];key=FUN_overlay_11__0211f1d0(self);
    if((unsigned short)(key+0xffc9)<=1){cursor.glyph=4;cursor.x=(80*x+28)<<12;cursor.y=0x14c000;}
    else if(key==50||key==54){cursor.glyph=7;cursor.x=(16*x+28)<<12;cursor.y=(16*y+251)<<12;}
    else{cursor.glyph=10;cursor.x=(16*x+28)<<12;cursor.y=(16*y+251)<<12;}
    FUN_020c32b4(&cursor,*(unsigned *)(self+236));
    if(*(unsigned *)self==3){FUN_02071d0c(&special);FUN_02090b44(&special);special.x=0x13000;special.y=0x172000;special.glyph=15;FUN_020c32b4(&special,*(unsigned *)(self+236));}
    if(*(unsigned *)self!=3){FUN_02071d0c(&cover);FUN_02090b44(&cover);cover.x=0x47000;cover.y=0xe6000;cover.glyph=17;FUN_020c32b4(&cover,*(unsigned *)(self+236));}
    FUN_02014714();
    if(*(unsigned *)self==3&&*(void **)(self+256)){
        if(FUN_02084bd4(DAT_0211a51c)==2)FUN_020b3088(*(void **)(self+256),0);
        else if(FUN_02084bd4(DAT_0211a51c)==1)FUN_020b3088(*(void **)(self+256),0);
    }
}
