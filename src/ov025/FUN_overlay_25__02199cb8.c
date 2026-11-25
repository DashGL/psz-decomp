// flags: -O4,s
// Advance paired projectile tracks and transition from flight to ground effect.
typedef struct {int x,y,z;} Vec3;
extern int DAT_0219ae14[];
extern void FUN_02036848(Vec3 *,Vec3 *),FUN_02072750(void *,int,Vec3 *);
extern void *FUN_02075040(void *,int);
extern int FUN_0207281c(void *,int),FUN_02074e9c(void *,int,int,int),FUN_02075090(void *);
extern void FUN_02075068(void *,int),FUN_02072724(void *,int),FUN_02036368(Vec3 *),FUN_0204bf88(void *);
extern unsigned short FUN_0205cc08(int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
void FUN_overlay_25__02199cb8(void *self)
{
    void *effect;
    Vec3 direction;
    unsigned short yaw;
    if(I(self,0x11c)==1){
        I(self,0x114)-=DAT_0219ae14[1];FUN_02036848(&V(self,0xec),&V(self,0x104));FUN_02036848(&V(self,0xf8),&V(self,0x110));
        effect=FUN_02075040(self,I(self,0xe8));if(effect)V(effect,0x5c)=V(self,0xf8);
        FUN_02072750(self,I(self,0xe4),&V(self,0xec));
        if(FUN_0207281c(self,I(self,0xe4))>0){
            FUN_02075068(self,I(self,0xe8));I(self,0xe8)=-1;
            FUN_02072724(self,I(self,0xe4));I(self,0xe4)=-1;I(self,0x11c)=0;
        }else if(I(self,0xfc)<0){
            FUN_02072724(self,I(self,0xe4));I(self,0xe4)=-1;
            FUN_02075068(self,I(self,0xe8));I(self,0xe8)=-1;I(self,0xfc)=0;
            direction=V(self,0x110);FUN_02036368(&direction);yaw=FUN_0205cc08(direction.x);
            I(self,0xe8)=FUN_02074e9c(self,3,0,0);effect=FUN_02075040(self,I(self,0xe8));
            if(effect){V(effect,0x5c)=V(self,0xf8);I(effect,0xe4)|=0x4000;H(effect,0x6a)=yaw;FUN_0204bf88(effect);}
            I(self,0x11c)=2;
        }
    }else if(I(self,0x11c)==2 && FUN_02075090(self)){
        FUN_02075068(self,I(self,0xe8));I(self,0xe8)=-1;I(self,0x11c)=0;
    }
}
