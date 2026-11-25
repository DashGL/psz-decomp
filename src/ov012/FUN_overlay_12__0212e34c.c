// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct{short glyph,a,b,pad;int x,y;}Draw;
typedef struct{int x,y;}Pair;
extern int data_0213e20c;
extern const Pair data_0213b2bc;
extern const int data_0213b2dc[];
extern void FUN_overlay_12__02131c58(void),FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d51c(void *,int),FUN_020c32b4(void *,int),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__0212c8f8(const char *,int,int,int),FUN_02079160(void *,const Pair *,unsigned,int,int,int,int,int,int);
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_02079114(void);
extern const char *FUN_overlay_12__0212d268(int,int);
void FUN_overlay_12__0212e34c(int *self)
{
    Draw draw;
    Pair pos, base2, base;
    int end, end2, handle, index, scroll, row, y;
    if(((data_0213e20c==self[2])?E1:E0)==0)return;
    FUN_overlay_12__02131c58();FUN_overlay_12__0212d488(self+42,0);FUN_overlay_12__0212d51c(self+42,0);
    draw.glyph=0;draw.a=0;draw.b=0;draw.glyph=0;draw.a=0;draw.b=0;draw.x=0;draw.y=0;
    draw.x=0;draw.y=5<<12;draw.glyph=0;FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    handle=FUN_overlay_12__02131ad0(1);scroll=self[45];end=scroll+5;row=0;
    base=data_0213b2bc;
    base2=base;
    for(index=0;index<12;index++)if(self[30+index]){
        if(scroll<=row&&row<end){
            pos=base;y=((row-scroll)*16+69)<<12;pos.y=y;
            if(data_0213b2dc[index]){draw.x=216<<12;draw.y=y;draw.glyph=2;FUN_020c32b4(&draw,handle);pos.x=159<<12;}
            FUN_02079160(FUN_02079114(),&pos,2,7,self[18+index],handle,-1,8,0);
        }
        row++;
    }
    if(self[46]){
        int scroll2, row2, index2;
        self[46]=0;FUN_overlay_12__0212c9a0();scroll2=self[45];end2=scroll2+5;row2=0;
        for(index2=0;index2<12;index2++)if(self[30+index2]){
            if(scroll2<=row2&&row2<end2)FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(1,index2),30,69+(row2-scroll2)*16,2);
            row2++;
        }
    }
}
