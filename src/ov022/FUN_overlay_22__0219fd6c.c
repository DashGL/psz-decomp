// flags: -O4,s
typedef struct { int x,y,z; } Vec3;
typedef struct { int a,b,c; } Entry;
extern unsigned short FUN_0205c9e4(int,int);
extern int FUN_0205c86c(const Vec3 *);
extern int FUN_02074e9c(void *,int,int,int);
extern void *FUN_02075040(void *,int);
extern void FUN_0204bf88(void *);
extern void FUN_02037214(void *,int,int,const Vec3 *,int);
extern int FUN_02072650(void *,int,int,int);
extern void FUN_02072750(void *,int,const Vec3 *);
extern const Entry DAT_021a0e54[];
void FUN_overlay_22__0219fd6c(unsigned char *self,void *actor)
{
    Vec3 direction,horizontal,scale;
    unsigned char *effect;
    int index;
    unsigned short yaw,pitch;
    if (actor==0) return;
    index=*(int *)(self+0x18);
    if (index<0 || index>=2) return;
    direction=*(const Vec3 *)(self+0x2c);
    const Vec3 *d=&direction; yaw=FUN_0205c9e4(d->x,d->z); horizontal.y=0; horizontal.z=d->z; horizontal.x=d->x; pitch=(unsigned short)(0x10000-FUN_0205c9e4(d->y,FUN_0205c86c(&horizontal)));
    *(int *)(self+0x40)=FUN_02074e9c(actor,DAT_021a0e54[index].a,1,0);
    effect=FUN_02075040(actor,*(int *)(self+0x40));
    if (effect!=0) {
        *(Vec3 *)(effect+0x5c)=*(const Vec3 *)(self+0x20);
        *(unsigned short *)(effect+0x6a)=yaw;
        FUN_0204bf88(effect);
        *(unsigned short *)(effect+0x68)=pitch+0xc000;
        FUN_0204bf88(effect);
        *(unsigned int *)(effect+0xe4)|=0x4000;
        FUN_02037214(actor,27,8,(const Vec3 *)(self+8),1);
    }
    *(int *)(self+0x3c)=FUN_02074e9c(actor,DAT_021a0e54[index].b,1,0);
    effect=FUN_02075040(actor,*(int *)(self+0x3c));
    if (effect!=0) {
        scale.x=0x1000;scale.y=0x1000;scale.z=0;
        *(Vec3 *)(effect+0x5c)=*(const Vec3 *)(self+0x20);
        *(Vec3 *)(effect+0x50)=scale;
        *(unsigned short *)(effect+0x6a)=yaw;
        FUN_0204bf88(effect);
        *(unsigned short *)(effect+0x68)=pitch;
        FUN_0204bf88(effect);
    }
    if (*(int *)(self+0x1c)!=-1) {
        *(int *)(self+0x48)=FUN_02072650(actor,*(int *)(self+0x1c),0,0);
        FUN_02072750(actor,*(int *)(self+0x48),(const Vec3 *)(self+8));
    }
}
