//cpp
// flags: -O4,s
enum Bool8c { E0 = 0, E1 = 1 };
struct Pair { int a[2]; };
struct ConstTbl { int f0; Pair p; };
struct S {
    char pad[0x2c];
    unsigned short f2c;
    unsigned char f2e;
    char pad2[0x15];
    int f44;
    char pad3[8];
    unsigned char *f50;
};
extern "C" {
extern ConstTbl DAT_020f422c;
extern void *FUN_02129ed4(void);
extern void FUN_0212a980(void *, int);
extern void FUN_020302e8(int *, S *);
extern void FUN_0212a3cc(void *, int, int, int, int);
extern void FUN_0203067c(S *, unsigned short);
extern void FUN_0203041c(S *);

void FUN_0208c13c(S *r5) {
    int vec[3];
    int idx = r5->f44;
    Pair arr = DAT_020f422c.p;
    int r4 = 0;
    bool ok;
    if (idx >= 0 && idx < 2) {
        r4 = arr.a[idx];
        ok = true;
    } else {
        ok = false;
    }
    if (ok) {
        if ((*r5->f50 & 1) ? E1 : E0) {
            FUN_0212a980(FUN_02129ed4(), r4);
        } else {
            FUN_020302e8(vec, r5);
            FUN_0212a3cc(FUN_02129ed4(), vec[0], vec[2], r4, 0);
        }
    }
    if (*(unsigned char *)((char *)r5 + 0x2e) <= 1) {
        FUN_0203067c(r5, r5->f2c + 0x28f);
    }
    FUN_0203041c(r5);
}
}
