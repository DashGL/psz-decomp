// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    unsigned char f0;
    unsigned char f1;
    unsigned short f2;
    int f4;
    int f8;
} S_e5964;
extern char *FUN_020e961c(void);
extern int FUN_020d514c(int, int, int);
extern int FUN_020d8a80(void *, int, unsigned short, int);
extern int FUN_020e88f8(int);
extern int FUN_020d374c(int);
extern int FUN_020d5df0(int, int, unsigned char, void *, void *, S_e5964 *);
extern void FUN_020e92f8(void);
extern void FUN_020e92f4(void);
int FUN_020e5964(S_e5964 *a) {
    if (a->f0 == 0) {
        char *p = FUN_020e961c();
        int r1 = FUN_020d514c(a->f4, 0, 0);
        if (FUN_020e88f8(FUN_020d8a80(*(void **)(p + 0xe4), r1, a->f2, a->f8)) != 0) {
            return 2;
        }
    }
    void *f6 = (void *)FUN_020e92f8;
    void *f7 = (void *)FUN_020e92f4;
    int i = 0;
    int res;
    do {
        res = FUN_020d5df0(FUN_020d374c(**(int **)(FUN_020e961c() + 4)), a->f8, a->f0, f7, f6, a);
        if (res == 0 || res != 3) {
            break;
        }
        i++;
    } while (i < 5);
    return res;
}
