// FUN_overlay_19__0219a610 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__0219a610 @ 0x0219a610
// check: 2.0/sp2p3 target=0x140 candidate=0x140 words=0 exact_bytes=0 bad_relocs=0
extern const int D_020fc988[];
extern const int DAT_0219d170[];
extern const int DAT_0219d1b4;
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    int v[12];
} Mat43;

typedef struct {
    int v[9];
} Mat33;

extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, Mat43 *, Mat33 *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0205b960(const Vec3 *, const Mat43 *, Vec3 *);
extern Vec3 *FUN_020345f0(Vec3 *, const Vec3 *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void *FUN_02075040(void *, int);
extern void FUN_020bc5cc(int *, const int *, const int *);

void FUN_overlay_19__0219a610(unsigned char *self, unsigned char *actor)
{
    Vec3 pos;
    Mat43 m43;
    Mat33 m33;
    Vec3 local_pos;
    Vec3 scale_vec;
    Vec3 world_pos;
    int scale_base;
    int scaled;
    int ratio;
    int sum_y;
    int state;
    void *comp;
    unsigned char *eff;

    if (*(int *)(self + 0x30) == -1) {
        *(int *)(self + 0x30) = FUN_02074e9c(actor, 0, 1, 0);
    }

    state = *(int *)(self + 0x24);
    if (state == 0) {
        *(int *)(self + 0x24) = 1;
    } else if (state == 1) {
        int v = *(int *)(self + 0x34) + DAT_0219d170[19];
        *(int *)(self + 0x34) = v;
        if (v >= 0x1000) {
            v = 0x1000;
        }
        *(int *)(self + 0x34) = v;
    } else if (state == 2) {
        int v = *(int *)(self + 0x34) - DAT_0219d170[19];
        *(int *)(self + 0x34) = v;
        if (v <= 0) {
            v = 0;
        }
        *(int *)(self + 0x34) = v;
        if (v <= 0) {
            *(int *)(self + 0x1c) = 1;
        }
    }

    scale_base = *D_020fc988;
    pos.x = 0;
    pos.z = 0;
    pos.y = 0x1000;

    comp = FUN_02036c88(actor, 0);
    if (comp != 0) {
        if (FUN_0204260c(comp, 0xe, &m43, &m33) == 0) {
            return;
        }
        FUN_0200c938(&local_pos, 0xc);
        FUN_0205b960(&local_pos, &m43, &local_pos);
        FUN_020345f0(&world_pos, &local_pos);
        pos = world_pos;
        if (pos.y < 0) {
            pos.y = 0;
        }
    }

    sum_y = DAT_0219d170[18] + pos.y;
    FUN_020bc610(&ratio, &DAT_0219d1b4, &sum_y);
    scale_base = ratio;

    eff = (unsigned char *)FUN_02075040(actor, *(int *)(self + 0x30));
    if (eff != 0) {
        *(Vec3 *)(self + 0xc) = *(const Vec3 *)(actor + 0x38);
        *(int *)(self + 0x10) = 0;
        *(unsigned short *)(self + 0x18) = *(unsigned short *)(actor + 0x44);
        FUN_020bc5cc(&scaled, (const int *)(self + 0x34), &scale_base);
        scale_vec.x = scaled;
        scale_vec.y = 0x1800;
        scale_vec.z = scaled;
        *(Vec3 *)(eff + 0x5c) = *(const Vec3 *)(self + 0xc);
        *(Vec3 *)(eff + 0x50) = scale_vec;
    }
}
