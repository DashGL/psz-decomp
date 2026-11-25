// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x44];
    int f44;
} Sub;
typedef struct {
    int f0, f4;
    Sub *f8;
    char pad[0x44];
    int f50;
} Obj;
extern int FUN_020d4584(Obj *, int, int, int *);
extern void FUN_020d2b30(int *, int, int);
extern int FUN_020d4640(Obj *);
int FUN_020d4828(Obj *a, int b, int c) {
    int flag;
    if (FUN_020d4584(a, 5, c + 7 + a->f8->f44, &flag) == 0) {
        return 0;
    }
    if (flag != 0) {
        return 1;
    }
    FUN_020d2b30(&a->f50, b, c);
    if (FUN_020d4640(a) != 0) {
        return 1;
    }
    return 0;
}
