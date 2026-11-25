// near: complete semantics; local layout and draw scheduling remain.
// check: 2.0/sp2p3 target=0x164 candidate=0x162 words=999 exact_bytes=999 bad_relocs=1
// flags: -O4,s
typedef struct{short glyph,a,b,pad;int x,y;}Draw;
extern void FUN_overlay_12__02130000(void *),FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d51c(void *,int),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int),FUN_0203955c(void *),FUN_02045990(void *,const void *),FUN_overlay_12__02133ec4(void *),FUN_overlay_12__02133fc0(void),FUN_overlay_12__0212d710(void),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__0212c8f8(const char *,int,int,int);
extern int FUN_overlay_12__02131ad0(int),FUN_0209ca50(char *,const void *,int);
extern const char *FUN_overlay_12__0212d268(int,int);
void FUN_overlay_12__02130150(int *self)
{
    Draw draw;
    unsigned item[4];
    char text[24];
    int lower=self[18]==1,index,i;
    FUN_overlay_12__02130000(self);
    FUN_overlay_12__0212d488(self+42,lower);FUN_overlay_12__0212d51c(self+42,lower);
    FUN_02071d0c(&draw);FUN_02090b44(&draw);
    draw.x = 7 << 12;
    draw.y = (self[17] == 1 && self[18] == 1) ? (221 << 12) : (29 << 12);
    draw.glyph = 16;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    if(!lower){
        if(self[39]){FUN_0203955c(item);FUN_02045990(item,(char *)self[39]+4*self[44]);FUN_overlay_12__02133ec4(item);}
        FUN_overlay_12__02133fc0();
    }else{
        FUN_overlay_12__0212d710();
        if(self[46]!=-1){
            draw.x=51<<12;draw.y=172<<12;draw.glyph=0;FUN_020c32b4(&draw,self[46]);
            draw.x=0;draw.y=172<<12;draw.glyph=1;FUN_020c32b4(&draw,self[46]);
        }
    }
    if(self[47]){
        self[47]=0;FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(3,self[37]),11,32,2);
        if (self[39]) {
            index = self[45];
            for (i = 0; i < 5 && index < self[19]; i++, index++)
                if (FUN_0209ca50(text, (char *)self[39] + index * 4, 1)) FUN_overlay_12__0212c8f8(text, 51, 69 + i * 16, 2);
        }
    }
}

// ROM0213028a explicitly prepares r2=1 for0209ca50; callee does not consume incoming r2.
