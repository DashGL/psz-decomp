// FUN_overlay_29__0219ab88 @ 0x0219ab88 (0x154, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0x154 candidate=0x154 words=0 exact_bytes=0 bad_relocs=0
typedef struct { int x,y,z; } Vec3;
typedef struct { int v[12]; } Mat43;
typedef struct { int v[9]; } Mat33;
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,Mat43 *,Mat33 *);
extern void FUN_0200c938(void *,unsigned int);
extern void FUN_0205b960(const Vec3 *,const Mat43 *,Vec3 *);
extern Vec3 *FUN_020345f0(Vec3 *,const Vec3 *);
extern void FUN_0205b0f0(const Vec3 *,const Mat33 *,Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_020bbfbc(Vec3 *,unsigned short);
extern int FUN_02074e9c(void *,int,int,int);
extern void *FUN_02075040(void *,int);
extern const Vec3 DAT_0219b8b4;
extern const int DAT_0219be74[];
void FUN_overlay_29__0219ab88(unsigned char *actor,int index)
{
    Mat43 matrix;
    Mat33 rotation;
    Vec3 local,position,basis,direction;
    unsigned char *slot,*effect;
    void *component;
    int scale,handle;
    if (index<0 || index>=3) return;
    slot=actor+0xd4+index*24;
    if (*(int *)(slot+4)!=-1) return;
    component=FUN_02036c88(actor,0);
    if (component==0) return;
    if (FUN_0204260c(component,0,&matrix,&rotation)==0) return;
    FUN_0200c938(&local,12);
    FUN_0205b960(&local,&matrix,&local);
    local.y=0x2bc;
    FUN_020345f0(&position,&local);
    basis=DAT_0219b8b4;
    FUN_0205b0f0(&basis,&rotation,&basis);
    FUN_020345f0(&direction,&basis);
    direction.y=0;
    FUN_02036368(&direction);
    scale=DAT_0219be74[1];
    direction.x=(int)(((long long)direction.x*scale+0x800)>>12);
    direction.y=(int)(((long long)direction.y*scale+0x800)>>12);
    direction.z=(int)(((long long)direction.z*scale+0x800)>>12);
    if (index==0) FUN_020bbfbc(&direction,0xd000);
    else if (index==2) FUN_020bbfbc(&direction,0x3000);
    handle=FUN_02074e9c(actor,0,1,0);
    effect=FUN_02075040(actor,handle);
    if (effect!=0) {
        *(Vec3 *)(effect+0x5c)=position;
        *(Vec3 *)(slot+0xc)=direction;
        *(int *)(slot+4)=handle;
        *(int *)slot=30;
    }
}
