// flags: -O4,s
extern const int data_02137c40[],data_02137bec[];
extern const char *FUN_overlay_12__02121fc8(int,int);
typedef struct{int x,y;} Pair;
extern void FUN_overlay_12__0211f7fc(void *,int,const char *,int,Pair,int),FUN_overlay_12__0212c8f8(const char *,int,int,int),FUN_overlay_12__0211f188(void *);
typedef struct{int v[7];} Seven;
typedef struct{int v[3];} Three;
void FUN_overlay_12__0211f8f0(int *self)
{
    Seven copy7;
    Three copy3;
    int row = 0;
    Seven base7=*(const Seven *)data_02137c40;
    Three base3=*(const Three *)data_02137bec;
    Pair position;
    int group, id;
    for(;row<self[4] && row<2;row++) {
        position.x=row*0x14000+(7<<12);
        position.y=row*0x11000+(29<<12);
        switch(row) {
        case 0:{copy7=base7;group=0;id=copy7.v[self[5]];break;}
        case 1:{copy3=base3;group=0;id=copy3.v[self[174+self[6]]];break;}
        default:continue;
        }
        FUN_overlay_12__0211f7fc((char *)self+712+row*288,0,FUN_overlay_12__02121fc8(group,id),row,position,0);
        FUN_overlay_12__0212c8f8((char *)self+728+row*288,row*20+11,row*17+32,2);
    }
    self[1]=row;
    for(;row<8;row++)FUN_overlay_12__0211f188((char *)self+712+row*288);
}
