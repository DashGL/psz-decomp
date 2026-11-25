// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    int *f8;
    int pad[10];
    int f34;
    int f38;
} Obj;
extern int FUN_0208546c(void);
extern int FUN_020b7fdc(int, int);
extern void FUN_0209794c(Obj *, int);
extern int FUN_02097650(Obj *);
int FUN_020970c4(Obj *a) {
    if (FUN_020b7fdc(0xb, FUN_0208546c()) != 0) {
        a->f34 = 6;
        a->f38 = 0x3c;
        FUN_0209794c(a, *a->f8);
        return 1;
    }
    if (FUN_02097650(a) != 0) {
        a->f34 = 0xb;
        a->f38 = 0;
        FUN_0209794c(a, FUN_0208546c());
        return 1;
    }
    return 0;
}
