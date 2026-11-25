// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int m[12]; } Mat43;
typedef struct { int m[9]; } Mat33;

extern void *FUN_02036c88(void *, int);
extern void FUN_0204260c(void *, int, Mat43 *, Mat33 *);
#pragma thumb off
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(Vec *, const Mat43 *, const Vec *);
extern int FUN_0205c86c(const Vec *);
extern int FUN_0205c9e4(int, int);
#pragma thumb on
extern void FUN_020345f0(Vec *, const Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_020447a4(void *, int, int, int, int);
extern void FUN_0204477c(void *, int, int, int);

void FUN_overlay_21__021991c8(void *a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    Mat43 mtx43;
    Mat33 mtx33;
    Vec v0, p0, v1, p1, dir, pos, tmp2, sum, s1, s2;
    void *obj;
    int len, b, cz, cx;

    obj = FUN_02036c88(a0, a2);
    FUN_0204260c(obj, a3, &mtx43, &mtx33);
    FUN_0200c938(&v0, 12);
    FUN_0205b960(&v0, &mtx43, &v0);
    FUN_020345f0(&p0, &v0);

    FUN_0204260c(obj, a4, &mtx43, &mtx33);
    FUN_0200c938(&v1, 12);
    FUN_0205b960(&v1, &mtx43, &v1);
    FUN_020345f0(&p1, &v1);

    FUN_02036348(&dir, &p0, &p1);
    len = FUN_0205c86c(&dir);
    len += a5;
    b = a6;
    FUN_02036368(&dir);

    FUN_0203647c(&sum, &p0, &p1);
    FUN_02091cc0(&s1, &dir, &a5);
    FUN_0203647c(&tmp2, &sum, &s1);
    FUN_02091cc0(&s2, &dir, &a6);
    FUN_02036348(&pos, &tmp2, &s2);

    cz = pos.z >> 1;
    cx = pos.x >> 1;
    FUN_020447a4(a0, a1, 0x3000, b + len, FUN_0205c9e4(dir.x, dir.z));
    FUN_0204477c(a0, a1, cx, cz);
}
