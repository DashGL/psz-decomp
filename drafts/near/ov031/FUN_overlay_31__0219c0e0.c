// near: ndiff=2/95 size=0x17c vers=2.0/sp2p3 next="Eight bytes differ only in scheduling global velocity load versus local zero stores/addresses. Full body and all relocations verified; parked without variants."
// flags: -O4,s
// USA ov31: follow a player model, trigger the timed effect, and project its marker.
typedef struct { int x,y,z; } Vec_c0e0;
typedef struct { int a[12]; } Mat43_c0e0;
typedef struct { int a[9]; } Mat33_c0e0;
typedef struct { short x,y; } Screen_c0e0;
extern int FUN_02047440(void *),FUN_0204770c(void *);
extern void *FUN_0204225c(void *,int),*FUN_0204daa8(int);
extern void FUN_02046bdc(void *,int),FUN_0204260c(void *,int,Mat43_c0e0 *,Mat33_c0e0 *);
extern void FUN_02035408(Vec_c0e0 *,int,int,int),FUN_02036848(Vec_c0e0 *,Vec_c0e0 *);
extern int DAT_0219d028[];
extern void FUN_overlay_31__0219b9b0(void *,Vec_c0e0 *,Vec_c0e0 *,int);
extern void FUN_overlay_31__0219b9f8(void *,Vec_c0e0 *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(Screen_c0e0 *,void *,Vec_c0e0 *,int);
extern void FUN_020c1d7c(int,int,int,int,int);
int FUN_overlay_31__0219c0e0(char *self) {
    Mat43_c0e0 matrix;
    Mat33_c0e0 rotation;
    Vec_c0e0 velocity,scaled,marker,position;
    Screen_c0e0 screen;
    int result=FUN_02047440(self);
    if(!result) {
        if(FUN_0204770c(self)) {
            if(*(int *)(self+0x94)>0x37000) {
                void *model=*(void **)(self+0x30);
                int i;
                for(i=0;i<5;i++) {
                    void *part=FUN_0204225c(model,i);
                    if(part)FUN_02046bdc(part,0x1ccd);
                }
            }
            if(DAT_0219d028[0]>*(int *)(self+0x94)) {
                char *entity=FUN_0204daa8(*(int *)(self+0x108));
                if(entity) {
                    void *model=*(void **)(entity+0x8c);
                    if(model) {
                        FUN_0204260c(model,0,&matrix,&rotation);
                        FUN_02035408(&position,matrix.a[9],matrix.a[10],matrix.a[11]);
                        *(Vec_c0e0 *)(self+0x5c)=position;
                    }
                }
            } else if(!*(int *)(self+0x10c)) {
                *(int *)(self+0x10c)=1;
                velocity.x=0;velocity.y=DAT_0219d028[1];velocity.z=0;
                scaled=velocity;
                scaled.x=(int)(((long long)scaled.x*(short)-0x5000+2048)>>12);
                scaled.y=(int)(((long long)scaled.y*(short)-0x5000+2048)>>12);
                scaled.z=(int)(((long long)scaled.z*(short)-0x5000+2048)>>12);
                FUN_02036848(&scaled,(Vec_c0e0 *)(self+0x5c));
                FUN_overlay_31__0219b9b0(*(void **)(self+0x104),&scaled,&velocity,15);
            }
            marker=*(Vec_c0e0 *)(self+0x5c);
            FUN_02090f74(&screen,FUN_02090c20(),&marker,1);
            FUN_020c1d7c(28,28,screen.x,screen.y,4);
        }
    } else FUN_overlay_31__0219b9f8(*(void **)(self+0x104),(Vec_c0e0 *)(self+0x5c));
    return result;
}
