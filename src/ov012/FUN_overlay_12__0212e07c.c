// flags: -O4,s
typedef struct {
    int kind;
    int index;
} KindEntry;
typedef struct {
    void *vtable;
    int pad[15];
    int f40;
    int f44;
    int counts[12];
    int visible[12];
    int menu[4];
    int fb8;
} SelfE07C;
typedef struct {
    unsigned char pad0[188];
    unsigned short reach[3];
    unsigned char flags[3];
} Progress;
extern int DAT_0213e300[];
extern const KindEntry data_0213b2c4[];
extern const int data_0213b208[3][7];
extern void *FUN_overlay_12__02131d80(void *,void *,int);
extern void FUN_0200c938(void *,unsigned int),FUN_overlay_12__0211f17c(void *),FUN_overlay_12__0211f870(void *,int,int,int),FUN_overlay_12__02131fd0(void *,int);
extern char *FUN_020a0ce8(void);
extern int FUN_overlay_12__0212d394(void *,int,int);
void *FUN_overlay_12__0212e07c(SelfE07C *self,void *owner)
{
    char *stats;
    Progress *progress;
    int excluded,i,j,total,nonzero,sum;
    FUN_overlay_12__02131d80(self,owner,0);
    self->vtable=DAT_0213e300;self->f40=0;self->f44=12;
    FUN_0200c938(self->counts,48);FUN_0200c938(self->visible,48);
    FUN_overlay_12__0211f17c(self->menu);self->fb8=1;
    excluded=0;
    for(i=0;i<12;i++)self->visible[i]=1;
    stats=FUN_020a0ce8()+236;
    self->counts[0]=*(int *)stats;self->counts[5]=*(int *)(stats+144);self->counts[6]=*(int *)(stats+148);
    self->counts[7]=*(short *)(stats+142);self->counts[8]=*(unsigned char *)(stats+160);
    progress=(Progress *)(FUN_020a0ce8()+404);
    {
        unsigned char *f=progress->flags;
        self->counts[9]=f[2];self->counts[10]=f[1];self->counts[11]=progress->flags[0];
        sum=0;for(i=0;i<3;i++)sum+=f[i];
    }
    if(sum==0){self->visible[9]=0;self->visible[10]=0;self->visible[11]=0;excluded+=3;}
    for(i=0;i<3;i++) {
        int index=data_0213b2c4[i].index;
        self->counts[index]=0;
        for(j=0;j<29;j++)self->counts[index]+=FUN_overlay_12__0212d394(progress,j,data_0213b2c4[i].kind);
    }
    { int k,m; for(k=0;k<3;k++) { int reached=progress->reach[k]; for(m=0;m<7;m++){if(reached<data_0213b208[k][m])break;self->counts[4]++;} } }
    total=0;nonzero=0;
    for(i=0;i<3;i++) {
        int index=data_0213b2c4[i].index;
        int n=self->counts[index];total+=n;
        if(n==0)self->visible[index]=0;else nonzero++;
    }
    if(nonzero<=1){self->visible[4]=0;self->visible[3]=0;self->visible[2]=0;excluded+=3;}
    else excluded+=3-nonzero;
    self->counts[1]=total;
    FUN_overlay_12__0211f870(self->menu,self->f44-excluded,5,0);
    FUN_overlay_12__02131fd0(self,1);
    return self;
}
