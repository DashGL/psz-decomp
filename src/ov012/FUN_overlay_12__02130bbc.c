// flags: -O4,s
typedef struct {short glyph,a,b,pad;int x,y;} Draw;
typedef struct {int x,y;} Point;
typedef struct {unsigned val : 31; unsigned flag : 1;} Rec;
extern const int DAT_0213b9dc[];
extern void FUN_overlay_12__02130a88(void *),FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d51c(void *,int),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int);
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_020a0ce8(void),*FUN_02079114(void),*FUN_020c0788(void),*FUN_020c1190(unsigned,int);
extern void FUN_02079160(void *,const void *,unsigned,int,int,int,int,int,int);
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__0212c8f8(const char *,int,int,int),FUN_overlay_12__0212c94c(const void *,int,int,int);
extern const char *FUN_overlay_12__0212d268(int,int);
void FUN_overlay_12__02130bbc(int *self)
{
    int selection,index,row,rank,handle1,handle2;
    Rec *records;
    Draw draw;
    Point number,value,number_base,value_base;
    char *name;
    FUN_overlay_12__02130a88(self);
    FUN_overlay_12__0212d488(self+33,0);
    FUN_overlay_12__0212d51c(self+33,0);
    selection=((int *)((char *)self+0x4c))[self[31]];
    records=(Rec *)((char *)FUN_020a0ce8()+604+60*selection);
    FUN_02071d0c(&draw);FUN_02090b44(&draw);
    draw.x=7<<12;draw.y=29<<12;draw.glyph=16;
    FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
    index=self[36];
    number_base=*(const Point *)(DAT_0213b9dc+4);
    value_base=*(const Point *)(DAT_0213b9dc+2);
    for(row=0;row<5;row++,index++){
        rank=index+1;
        if(rank==1){
            draw.x=29<<12;draw.y=69<<12;draw.glyph=19;
            FUN_020c32b4(&draw,FUN_overlay_12__02131ad0(4));
        }else{
            number=number_base;number.y=(16*row+69)<<12;
            if(rank>=10)number.x=number_base.x+(1<<14);
            handle1=FUN_overlay_12__02131ad0(0);
            FUN_02079160(FUN_02079114(),&number,0,2,rank,handle1,-1,8,0);
        }
        if(index<self[18]){
            value=value_base;value.y=(16*row+69)<<12;
            handle2=FUN_overlay_12__02131ad0(1);
            FUN_02079160(FUN_02079114(),&value,2,7,records[index].val,handle2,-1,8,0);
        }
    }
    if(self[37]){
        self[37]=0;FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(7,selection),11,32,2);
        index=self[36];
        for(row=0;row<5&&index<self[18];row++,index++){
            name=0;
            if((records[index].flag ? 1 : 0) != 0)name=FUN_020c0788();
            else{
                char *p=FUN_020c1190(((unsigned short *)records)[20+index],0);
                if(p){name=p;name+=16;}
            }
            if(name)FUN_overlay_12__0212c94c(name,50,16*row+69,2);
        }
    }
}
