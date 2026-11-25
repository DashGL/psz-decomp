// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x150 candidate=0x128 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/84 size=0x150 vers=2.0/sp2p3 next="register allocation and scheduling of state-selection boolean lowering and register allocation"
enum { E0 = 0, E1 = 1 };
typedef struct { int x,y,z; } Vec3;
extern int FUN_02037294(void *,const Vec3 *);
extern int FUN_overlay_25__021992c4(void *,Vec3 *);
extern void FUN_02037390(int *,const Vec3 *);
extern const int DAT_overlay_25__0219ad38[];
extern void FUN_02037910(void *,void *);
void FUN_overlay_25__02199140(unsigned char *self)
{
    Vec3 first_pos,pos,target,diff;
    int distance1,distance2;
    unsigned char *actor=*(unsigned char **)(self+4);
    if ((*(int *)(self+8)==*(int *)(self+0x10)?E1:E0)!=0) {
        if (*(int *)(self+0x50)==0) {
            first_pos=*(const Vec3 *)(actor+0x38);
            *(int *)(self+0x54)=FUN_02037294(actor,&first_pos);
            *(int *)(self+0x50)=1;
        } else {
            pos=*(const Vec3 *)(actor+0x38);
            *(int *)(self+0x54)=FUN_02037294(actor,&pos);
            if (FUN_overlay_25__021992c4(self,&target)!=0) {
                diff.x=target.x-pos.x;diff.y=target.y-pos.y;diff.z=target.z-pos.z;
                if ((*(int *)(actor+0xd4)==1?E1:E0)!=0) {
                    if (*(int *)(self+0x50)==1) {
                        FUN_02037390(&distance1,&diff);
                        if ((distance1<DAT_overlay_25__0219ad38[1]?E1:E0)!=0) {
                            *(int *)(self+0x4c)=4;*(int *)(self+0x50)=2;
                        } else {
                            *(int *)(self+0x4c)=3;*(int *)(self+0x50)=0;
                        }
                    } else {
                        *(int *)(self+0x4c)=5;*(int *)(self+0x50)=0;
                    }
                } else {
                    FUN_02037390(&distance2,&diff);
                    if ((distance2<DAT_overlay_25__0219ad38[1]?E1:E0)!=0) {
                        if (*(int *)(self+0x58)>=5) *(int *)(self+0x4c)=5;
                        else *(int *)(self+0x4c)=4;
                    } else *(int *)(self+0x4c)=3;
                    *(int *)(self+0x50)=0;
                }
            } else *(int *)(self+0x4c)=2;
        }
        switch (*(int *)(self+0x4c)) {
        case 3: FUN_02037910(self,*(void **)(self+0x38));break;
        case 4: FUN_02037910(self,*(void **)(self+0x3c));break;
        case 5: FUN_02037910(self,*(void **)(self+0x40));break;
        default:FUN_02037910(self,*(void **)(self+0x34));break;
        }
        *(int *)(self+0x4c)=0;
    }
}
