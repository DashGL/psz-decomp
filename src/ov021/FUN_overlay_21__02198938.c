//cpp
// flags: -O4,s
struct Vec3 { union { struct { int x, y, z; }; int w[3]; }; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(unsigned short);
};
extern "C" {
extern const short DAT_020ed83c[];
extern const Vec3 DAT_020fc958;
extern const int DAT_overlay_21__021a121c;
extern char *DAT_02108c84;
extern void FUN_overlay_21__02198a7c(void *);
extern void FUN_overlay_21__02198a9c(void *);
extern void FUN_overlay_21__0219909c(void *);
extern void FUN_020991c0(Vec3 *, const int *);
extern void FUN_0203647c(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02091cc0(Vec3 *, const Vec3 *, const int *);
extern void FUN_02036848(Vec3 *, const Vec3 *);
extern void FUN_02043f30(void *, int, const Vec3 *);
extern void *FUN_0208546c(void);
extern void FUN_02086760(void *, Vec3 *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
#pragma thumb off
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on

void FUN_overlay_21__02198938(char *self) {
    Vec3 dir1, offset, dir2, pos, v5, v6, diff, tmp1, tmp2;
    FUN_overlay_21__02198a7c(self);
    FUN_overlay_21__02198a9c(self);
    FUN_overlay_21__0219909c(self);
    if (*(int *)(self + 0xd4) == 1) {
        int idx = ((int)(unsigned short)(*(unsigned short *)(self + 0x108) + 0x8000u) >> 4) << 1;
        dir1.x = DAT_020ed83c[idx];
        dir1.y = 0;
        dir1.z = DAT_020ed83c[idx + 1];
        FUN_020991c0(&dir1, (const int *)(self + 0x10c));
        FUN_0203647c(&tmp1, (const Vec3 *)(self + 0xfc), &dir1);
        *(Vec3 *)(self + 0x38) = tmp1;
    }
    *(unsigned short *)(self + 0x44) = *(unsigned short *)(self + 0x108) + *(unsigned short *)(self + 0x10a);
    offset = DAT_020fc958;
    if (*(int *)(self + 0xd4) == 0) {
        int idx = ((int)*(unsigned short *)(self + 0x44) >> 4) << 1;
        dir2.x = DAT_020ed83c[idx];
        dir2.y = 0;
        dir2.z = DAT_020ed83c[idx + 1];
        FUN_02091cc0(&tmp2, &dir2, &DAT_overlay_21__021a121c);
        FUN_02036848(&offset, &tmp2);
    }
    FUN_0203647c(&pos, (const Vec3 *)(self + 0xf0), &offset);
    FUN_02043f30(self, 0, &pos);
    if (*(int *)(self + 0xd4) == 0) {
        char *mgr = DAT_02108c84;
        if (mgr) {
            Obj *obj = *(Obj **)(mgr + 0x40 + 4 * *(int *)(mgr + 0x64));
            if (obj) {
                FUN_02086760(FUN_0208546c(), &v5);
                v6 = *(const Vec3 *)(self + 0xfc);
                FUN_02036348(&diff, &v5, &v6);
                FUN_02036368(&diff);
                obj->v27(FUN_0205c9e4(diff.x, diff.z));
            }
        }
    }
}
}
