// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x148 candidate=0x14c words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/82 size=0x148 vers=2.0/sp2p3 next="register allocation and scheduling of bone-derived ground-effect scaling"
typedef struct { int x,y,z; } Vec3;
typedef struct { int v[12]; } Mat43;
typedef struct { int v[9]; } Mat33;
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,Mat43 *,Mat33 *);
extern void FUN_0200c938(void *,unsigned int);
extern void FUN_0205b960(const Vec3 *,const Mat43 *,Vec3 *);
extern Vec3 *FUN_020345f0(Vec3 *,const Vec3 *);
extern void *FUN_overlay_4__02129ed4(void);
extern void FUN_overlay_4__0212a294(void *,int,int,int,int);
extern void FUN_overlay_4__0212a9a0(void *,int);
extern int FUN_overlay_22__0219a2d0(void *,int,int);
extern int FUN_0205c520(int,int);
void FUN_overlay_22__0219ab34(unsigned char *self,int show,int update,int use_cached)
{
    Vec3 position;
    Mat43 matrix;
    Mat33 rotation;
    Vec3 local,world,scale;
    void *component;
    int *config;
    unsigned char *effect;
    int index,factor,side;
    position=*(const Vec3 *)(self+0x10);
    if (use_cached==0) {
        config=*(int **)(self+0xc);
        component=FUN_02036c88(*(void **)(self+4),config[0]);
        if (component!=0) {
            config=*(int **)(self+0xc);
            if (FUN_0204260c(component,config[3],&matrix,&rotation)==1) {
                FUN_0200c938(&local,12);
                FUN_0205b960(&local,&matrix,&local);
                FUN_020345f0(&world,&local);
                position=world;
            }
        }
    }
    index=**(int **)(self+0xc);
    if (update==1) FUN_overlay_4__0212a294(FUN_overlay_4__02129ed4(),position.x,position.z,index+1,1);
    else FUN_overlay_4__0212a9a0(FUN_overlay_4__02129ed4(),index+1);
    if (*(void **)(self+0x50)!=0) {
        if (show==1) show=FUN_overlay_22__0219a2d0(self,position.x,position.z);
        if (show==1 && position.y<0x19a) show=0;
        if (show==1) {
            factor=FUN_0205c520(0x4000-position.y,0x3e66);
            if (factor<0) factor=0;
            if (factor>0x1000) factor=0x1000;
            side=(int)(((long long)factor*0x1800+0x800)>>12)+0x2800;
            scale.x=side;scale.y=0x1000;scale.z=side;
            effect=*(unsigned char **)(self+0x50);
            *(Vec3 *)(effect+0x50)=scale;
            position.y=0x19a;
            effect=*(unsigned char **)(self+0x50);
            *(Vec3 *)(effect+0x5c)=position;
        }
        effect=*(unsigned char **)(self+0x50);
        if (show!=0) *(unsigned int *)(effect+0xe4)&=~1u;
        else *(unsigned int *)(effect+0xe4)|=1;
    }
}
