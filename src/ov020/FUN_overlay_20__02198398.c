//cpp
// flags: -O4,s
struct Vec3 {
    int x, y, z;
};

struct Target {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
    virtual void v1c(); virtual void v1d(); virtual void v1e(); virtual void v1f();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual void Apply(Vec3 *);
    unsigned char pad[0x98];
    Vec3 pos;
};

extern "C" {
extern int FUN_02040ce8(void *, int, int);
extern void FUN_02040d0c(void *, int, int);
extern int DAT_0219f8a0[];
extern int DAT_0219f8a8;
extern int DAT_020fc988;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern int FUN_020855bc(int);
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern Target *FUN_02039200(void *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern int FUN_0205c86c(const Vec3 *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_02036368(Vec3 *);
void FUN_overlay_20__02198398(unsigned char *actor);
}

void FUN_overlay_20__02198398(unsigned char *actor) {
    if (FUN_02040ce8(actor, 0, 1) != 0) {
        FUN_02040d0c(actor, 0, 1);
        *(int *)(actor + 0xe8) = DAT_0219f8a0[3];
    }
    int active = (*(int *)(actor + 0xe8) > DAT_020fc988) ? 1 : 0;
    if (active) {
        const Vec3 *origin;
        Target *target;
        int dt;
        dt = FUN_02036c34(actor);
        origin = (const Vec3 *)actor;
        origin = (const Vec3 *)(actor + 0x38);
        for (int i = 0; i <= 3; i++) {
            int state = FUN_020855bc(i);
            if (state == 1 || state == 3) {
                target = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
                if (target != 0) {
                    const Vec3 *p = &target->pos;
                    Vec3 pos;
                    Vec3 diff;
                    pos.x = p->x;
                    pos.y = p->y;
                    pos.z = p->z;
                    FUN_02036348(&diff, &pos, origin);
                    int distance = FUN_0205c86c(&diff);
                    int far = (distance > DAT_0219f8a0[2]) ? 1 : 0;
                    if (!far) {
                        int ratio;
                        FUN_020bc610(&ratio, &distance, &DAT_0219f8a8);
                        unsigned short index = (unsigned short)(((long long)ratio * 0x4000 + 0x800) >> 12);
                        int scale = DAT_020ed83c[(index >> 4) * 2 + 1];
                        FUN_02036368(&diff);
                        diff.x = (int)(((long long)diff.x * scale + 0x800) >> 12);
                        diff.y = (int)(((long long)diff.y * scale + 0x800) >> 12);
                        diff.z = (int)(((long long)diff.z * scale + 0x800) >> 12);
                        target->Apply(&diff);
                    }
                }
            }
        }
        *(int *)(actor + 0xe8) -= dt;
    }
}
