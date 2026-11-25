// FUN_overlay_20__021980c8 @ 0x021980c8 (0x16c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0x16c candidate=0x16c words=0 exact_bytes=0 bad_relocs=0
typedef struct { int v[12]; } Mat43;
extern void FUN_overlay_20__021987d0(void *);
extern void FUN_overlay_20__0219bce0(void *);
extern void FUN_overlay_20__0219d4d8(void *);
extern void FUN_overlay_20__0219df8c(void *);
extern void FUN_overlay_20__0219e68c(void *);
extern void FUN_overlay_20__02198398(void *);
extern int FUN_02034b8c(const void *,int);
extern void FUN_02036ed0(void *,int);
extern void FUN_02036f08(void *,int);
extern unsigned char DAT_0211a51c[];
extern int FUN_02084cc0(void *);
extern int FUN_020867a4(int *,int,int);
extern int FUN_0205c520(int,int);
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,Mat43 *,void *);
extern void FUN_02044570(void *,int,int);
void FUN_overlay_20__021980c8(unsigned char *actor)
{
    Mat43 matrix;
    int value,scale,component_id,enabled;
    void *component;
    FUN_overlay_20__021987d0(actor);
    FUN_overlay_20__0219bce0(actor);
    FUN_overlay_20__0219d4d8(actor);
    FUN_overlay_20__0219df8c(actor);
    FUN_overlay_20__0219e68c(actor);
    FUN_overlay_20__02198398(actor);
    if ((*(unsigned int *)(actor+0xec)&0x200)!=0) {
        if (FUN_02034b8c(actor+0x38,0x100)!=0) {
            *(unsigned int *)(actor+0xec)|=8;
            FUN_02036ed0(actor,1);
            if (FUN_020867a4(&value,FUN_02084cc0(DAT_0211a51c),*(int *)(actor+0xc))!=0) {
                if (value<0x14000) {
                    scale=FUN_0205c520(value,0x14000);
                    scale=(int)(((long long)scale*0x19a+0x800)>>12)+0xcd;
                } else scale=0x267;
                *(int *)(actor+0xd0)=scale;
            }
        } else {
            *(unsigned int *)(actor+0xec)&=~8u;
            FUN_02036f08(actor,1);
        }
    }
    if ((*(unsigned int *)(actor+0xec)&0x100)!=0) {
        component=FUN_02036c88(actor,0);
        if (FUN_0204260c(component,12,&matrix,0)!=0) {
            enabled=matrix.v[10]<0x2c00?1:0;
            component_id=(*(unsigned int *)(actor+0xec)&0x80?1:0)!=0?2:1;
            FUN_02044570(actor,component_id,enabled);
        }
        if (FUN_0204260c(component,18,&matrix,0)!=0) {
            enabled=matrix.v[10]<0x2c00?1:0;
            FUN_02044570(actor,3,enabled);
        }
        enabled=*(int *)(actor+0x3c)+0x1000<0x2c00?1:0;
        FUN_02044570(actor,0,enabled);
    }
}
