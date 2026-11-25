// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
typedef struct Obj {
    int pad[5];
    int f14;
    int f18;
    int f1c;
    int f20;
    void (*f24)(struct Obj *);
} Obj;
extern const char D_020fe9cc[];
extern const char D_020fe9d4[];
extern const char D_020fe95c[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d4d60(Obj *);
int FUN_020d2bec(Obj *a) {
    if (a == 0) {
        FUN_02000edc(D_020fe9cc, D_020fe9d4, D_020fe95c, 0x1b);
    }
    if (a == 0) {
        return 1;
    }
    if (a->f24 == 0) {
        return 1;
    }
    a->f1c++;
    a->f24(a);
    a->f1c--;
    if (a->f14 != 0 && a->f1c == 0) {
        FUN_020d4d60(a);
        return 0;
    }
    return 1;
}
