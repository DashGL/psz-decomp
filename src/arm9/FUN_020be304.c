// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x76, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct S_be304_020be304 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    char pad[0x18];
    signed char f1c;
    char pad2[0x2b];
    int f48;
    int f4c;
    int f50;
    char pad3[0xf0c];
    void (*ff60)(int, int);
};
extern "C" {
int FUN_020e04b8(int *, int *);
void FUN_020e0544(void);
void FUN_020e0df4(void);
void FUN_020be37c(S_be304_020be304 *);
void FUN_020be304(S_be304_020be304 *a) {
    if (a->f1c == 12) {
        return;
    }
    int r0 = FUN_020e04b8(&a->f4c, &a->f50);
    a->f48 = r0;
    if (r0 == 0) {
        return;
    }
    FUN_020e0544();
    switch (a->f50) {
    case 3:
        FUN_020e0df4();
        break;
    case 6:
        FUN_020e0df4();
        a->v8();
        break;
    case 7:
        a->f1c = 12;
        break;
    case 1:
    case 2:
        FUN_020be37c(a);
        break;
    }
    if (a->ff60 != 0) {
        a->ff60(a->f4c, a->f50);
    }
}
}
