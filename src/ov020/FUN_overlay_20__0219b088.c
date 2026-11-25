// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x13c candidate=0x138 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/79 size=0x13c vers=2.0/sp2p3 next="match register allocation and instruction scheduling; recheck displaced relocation slots"
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern volatile int DAT_overlay_20__0219fa6c[];
extern void FUN_02043f74(void *, int, int);
extern void FUN_overlay_20__02199084(void *);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_0203647c(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_overlay_20__02199070(void *, const Vec3 *);
extern void FUN_overlay_20__021990b0(void *, unsigned int);

void FUN_overlay_20__0219b088(unsigned char *self)
{
    Vec3 pos;
    Vec3 total_disp;
    Vec3 v_disp;
    Vec3 h_disp;
    int dt;
    int dy;
    unsigned char *actor;
    int c1;
    int c2;
    int vx;
    int vy;
    int vz;

    actor = *(unsigned char **)(self + 4);
    pos = *(const Vec3 *)(actor + 0x38);

    c1 = !(pos.y > DAT_overlay_20__0219fa6c[6]);
    if (c1 != 0) {
        FUN_02043f74(actor, 0, 0);
        FUN_overlay_20__02199084(actor);
        FUN_02037924(*(void **)(self + 8));
    } else {
        *(int *)(self + 0x24) += DAT_overlay_20__0219fa6c[7];
        c2 = !(*(int *)(self + 0x24) <= DAT_overlay_20__0219fa6c[4]);
        if (c2 != 0) {
            *(int *)(self + 0x24) = DAT_overlay_20__0219fa6c[4];
        }

        dt = FUN_02036c34(actor);
        FUN_020bc5cc(&dy, (const int *)(self + 0x24), &dt);

        vx = (int)(((long long)*(int *)(self + 0x18) * dt + 0x800) >> 12);
        vy = (int)(((long long)*(int *)(self + 0x1c) * dt + 0x800) >> 12);
        vz = (int)(((long long)*(int *)(self + 0x20) * dt + 0x800) >> 12);
        FUN_02035408(&h_disp, vx, vy, vz);

        v_disp.x = 0;
        v_disp.y = -dy;
        v_disp.z = 0;
        FUN_0203647c(&total_disp, &v_disp, &h_disp);
        FUN_overlay_20__02199070(actor, &total_disp);

        *(unsigned short *)(self + 0x28) += 0x12;
        if (*(unsigned short *)(self + 0x28) > 0xb6) {
            *(unsigned short *)(self + 0x28) = 0xb6;
        }
        *(unsigned short *)(self + 0x2a) += *(unsigned short *)(self + 0x28);
        FUN_overlay_20__021990b0(actor, *(unsigned short *)(self + 0x2a));
    }
}
