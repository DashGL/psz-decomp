// flags: -O4,s
typedef struct { int x,y,z; } Vec3;
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *,int);
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02044570(void *,int,int);
extern void FUN_02036f08(void *,int);
extern void FUN_02037568(void *);
extern const int DAT_020fc988;
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02036ed0(void *,int);
extern void FUN_02037558(void *);
extern unsigned char *DAT_02108d04;
extern void FUN_0205c8cc(const Vec3 *,Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_02037924(void *);
void FUN_overlay_23__0219acf4(unsigned char *self)
{
    Vec3 pos,diff;
    unsigned char *actor=*(unsigned char **)(self+4);
    unsigned char *owner=*(unsigned char **)(self+8);
    unsigned char *target;
    int dt=FUN_02036c34(actor);
    int *params=(int *)(owner+0x90);
    unsigned short angle;
    switch (*(int *)(self+0xc)) {
    case 0:
        if (FUN_02040d2c(actor,0)!=0) {
            FUN_02043ea4(actor,0,0);FUN_02044570(actor,0,0);
            FUN_02036f08(actor,1);FUN_02037568(actor);
            *(int *)(self+0xc)=1;*(int *)(self+0x10)=DAT_020fc988;
            *(int *)(self+0x14)=params[2];
        }
        break;
    case 1:
        {
            int cur = *(int *)(self+0x10) + dt;
            int done;
            *(int *)(self+0x10) = cur;
            done = !(cur < *(int *)(self+0x14));
            if (done != 0) {
                FUN_02040c0c(actor,0,14,0x1000,0);
                FUN_02043ea4(actor,0,1);FUN_02044570(actor,0,1);
                FUN_02036ed0(actor,1);FUN_02037558(actor);
                pos.x=params[0];pos.y=0;pos.z=params[1];
                *(Vec3 *)(actor+0x38)=pos;
                target=DAT_02108d04;
                angle=0;
                if (target!=0) {
                    const Vec3 *op=(const Vec3 *)(actor+0x38);
                    const Vec3 *tp=(const Vec3 *)(target+0x9c);
                    int z=tp->z-op->z; int y=tp->y-op->y; int x=tp->x-op->x;
                    diff.x=x; diff.y=y; diff.z=z;
                    diff.y=0;
                    if (diff.x!=0 || diff.y!=0 || diff.z!=0) FUN_0205c8cc(&diff,&diff);
                    angle=FUN_0205cc08(diff.z);
                    if (diff.x<0) angle=(unsigned short)(0x10000-angle);
                }
                *(unsigned short *)(actor+0x44)=angle;
                *(int *)(self+0xc)=2;
            }
        }
        break;
    case 2:
        if (FUN_02040d2c(actor,0)!=0) {
            FUN_02040c0c(actor,0,1,0x1000,0);FUN_02037924(owner);
        }
        break;
    }
}
