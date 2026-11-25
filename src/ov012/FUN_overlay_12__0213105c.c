// flags: -O4,s
// near: Full semantics; parked for draw/loop register allocation and scheduling.
// check: 2.0/sp2p3 target=0x194 candidate=0x1ac words=999 exact_bytes=999 bad_relocs=3
typedef struct {short glyph,a,b,pad;int x,y;} Draw;
extern int DAT_0213e20c[];
extern void FUN_overlay_12__02131c58(void),FUN_overlay_12__0212c9a0(void);
extern void FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d570(int,int,int,int);
extern int FUN_overlay_12__02131ad0(int),FUN_overlay_12__021311f0(void *,int);
extern void FUN_020c32b4(void *,int);
extern const char *FUN_overlay_12__0212d268(int,int);
extern void FUN_overlay_12__0212c8f8(const char *,int,int,int),FUN_overlay_12__0212d63c(const char *,int);
enum { E0 = 0, E1 = 1 };
void FUN_overlay_12__0213105c(int *self)
{
    Draw draw;
    int handle,index,row,id,style;
    const char *text;
    if(((DAT_0213e20c[0]==self[2])?E1:E0)==0)return;
    FUN_overlay_12__02131c58();
    FUN_overlay_12__0212d488(self+220,0);
    draw.glyph=0;draw.a=0;draw.b=0;
    draw.glyph=0;draw.a=0;draw.b=0;
    draw.x=0;draw.y=0;draw.x=0;draw.y=5<<12;draw.glyph=5;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    FUN_overlay_12__0212d570(15,self[19],self[18],0);
    if(self[17]>0){
        draw.x=27<<12;draw.y=(unsigned)(26*(self[222]-self[223])+66)*4096u;draw.glyph=14;
        FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
        draw.x=29<<12;draw.glyph=18;handle=FUN_overlay_12__02131ad0(4);
        index=self[223];
        for(row=0;row<3&&index<self[17];row++,index++)
            if(FUN_overlay_12__021311f0(self,self[20+2*index])){
                draw.y=(26*row+69)<<12;FUN_020c32b4(&draw,handle);
            }
        if(self[224]){
            self[224]=0;FUN_overlay_12__0212c9a0();index=self[223];
            for(row=0;row<3&&index<self[17];row++,index++){
                id=self[20+2*index];
                if(self[21+2*index])text=FUN_overlay_12__0212d268(5,id);
                else text=FUN_overlay_12__0212d268(0,11);
                style=self[21+2*index]?2:9;
                FUN_overlay_12__0212c8f8(text,51,26*row+69,style);
                text=FUN_overlay_12__0212d268(6,id);
                FUN_overlay_12__0212c8f8(text,51,26*row+79,style);
            }
        }
    }else if(self[224]){
        self[224]=0;FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0,19),2);
    }
}
