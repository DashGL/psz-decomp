// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int data_0213e20c;
extern void FUN_overlay_12__02131c58(void),FUN_020c32b4(void *,int),FUN_overlay_12__0212c978(int,int,int,int),FUN_overlay_12__0212c8f8(const void *,int,int,int);
extern int FUN_overlay_12__02131ad0(int),FUN_overlay_12__0212daf8(void *,char *,int);
extern const signed char *FUN_overlay_12__021362c4(int,int);
typedef struct {short a,b,c,pad;int x,y;} Draw;
void FUN_overlay_12__0212d9e4(int *self)
{
    Draw draw;char text[36];
    const signed char *title;
    int row,base,y;
    if(((data_0213e20c==self[2])?E1:E0)==0)return;
    FUN_overlay_12__02131c58();
    draw.a=0;draw.b=0;draw.c=0;draw.a=0;draw.b=0;draw.c=0;draw.x=0;draw.y=0;
    draw.x=0;draw.y=0x5000;draw.a=7;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    draw.x=0x29000;draw.y=0x79000;draw.a=9;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    draw.x=0x28000;draw.y=0x31000;draw.a=8;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    if(self[19]!=0)return;
    self[19]=1;FUN_overlay_12__0212c978(40,53,177,89);
    y=63;
    base=5*self[18];
    for(row=0;row<5;row++){
        if(FUN_overlay_12__0212daf8(self,text,row+base))FUN_overlay_12__0212c8f8(text,46,y,2);
        y+=10;
    }
    title=FUN_overlay_12__021362c4(2,2);
    {
        const signed char *p;
        int count;
        int width;
        p = title;
        width = 0;
        if (title) {
            for (count = 0; count < 256; count++, p++) {
                if (!*p) break;
                width += 5;
            }
        }
        FUN_overlay_12__0212c8f8(title,126-width/2,122,2);
    }
}
