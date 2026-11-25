// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c4, exact bytes and relocation targets.
// check: vers=2.0/sp2p3 target=0x1c4 candidate=0x1c4 words=0 exact_bytes=0 bad_relocs=0
// Draft only: exact-byte and relocation checks pass; promotion gates pending.
// Initialize randomized paired projectile tracks from bone 4 and attach effects.
typedef struct {int x,y,z;} Vec3;
extern Vec3 DAT_0219bb50;
extern int DAT_0219be80[];
extern void *FUN_02036c88(void *,int),*FUN_02075040(void *,int);
extern void FUN_0204260c(void *,int,int *,int *),FUN_0200c938(void *,int);
extern void FUN_0205b960(Vec3 *,int *,Vec3 *),FUN_0205b0f0(Vec3 *,int *),FUN_020345f0(Vec3 *,Vec3 *);
extern void FUN_02036368(Vec3 *),FUN_02035408(Vec3 *,int,int,int);
extern unsigned short FUN_0205cc08(int);
extern int FUN_02035b60(int);
extern int FUN_02072650(void *,int,int,int),FUN_02074e9c(void *,int,int,int);
extern void FUN_02072750(void *,int,Vec3 *),FUN_0204bf88(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
void FUN_overlay_28__021980bc(void *self)
{
    int matrix[12],rotation[9],speed;
    Vec3 origin,position,direction,normal,velocity;
    long long x,y,z;
    unsigned short yaw;
    void *effect;
    FUN_0204260c(FUN_02036c88(self,0),4,matrix,rotation);
    FUN_0200c938(&origin,12);FUN_0205b960(&origin,matrix,&origin);
    FUN_020345f0(&position,&origin);
    direction=DAT_0219bb50;FUN_0205b0f0(&direction,rotation);direction.y=0;
    FUN_020345f0(&normal,&direction);FUN_02036368(&normal);
    V(self,0xe8)=position;V(self,0xf4)=V(self,0xe8);
    speed=(FUN_02035b60(10)+25)*41;
    x=(long long)normal.x*speed;y=(long long)normal.y*speed;z=(long long)normal.z*speed;
    FUN_02035408(&velocity,(int)((x+0x800)>>12),(int)((y+0x800)>>12),(int)((z+0x800)>>12));
    V(self,0x100)=velocity;V(self,0x10c)=V(self,0x100);
    yaw=FUN_0205cc08(I(self,0x10c));I(self,0x110)=DAT_0219be80[4];
    I(self,0xe0)=FUN_02072650(self,0,0,0);FUN_02072750(self,I(self,0xe0),&V(self,0xe8));
    I(self,0xe4)=FUN_02074e9c(self,1,0,0);effect=FUN_02075040(self,I(self,0xe4));
    if(effect){V(effect,0x5c)=V(self,0xf4);H(effect,0x6a)=yaw;FUN_0204bf88(effect);I(effect,0xe4)|=2;I(effect,0xe4)|=0x4000;}
    I(self,0x11c)=0;I(self,0x120)=0;I(self,0x124)=1;
}
