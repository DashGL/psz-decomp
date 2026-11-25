// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
struct Inner {
    char pad[0x44];
    int f44;
};
struct Obj {
    int f0;
    int f4;
    struct Inner *f8;
    char pad[0x44];
    char f50[1];
};
extern int FUN_020d4584(struct Obj *, int, int, int *);
extern void FUN_020d2b30(char *, int, int);
extern int FUN_020d4640(struct Obj *);

int FUN_020d46e4(struct Obj *a, int b) {
    int v;
    if (FUN_020d4584(a, 1, a->f8->f44 + 0x27, &v) == 0) {
        return 0;
    }
    if (v != 0) {
        return 1;
    }
    FUN_020d2b30(a->f50, b, 0x20);
    if (FUN_020d4640(a) != 0) {
        return 1;
    }
    return 0;
}
