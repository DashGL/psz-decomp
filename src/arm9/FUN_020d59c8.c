// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char c[8];
} Copy8_d59c8;
typedef struct {
    int f0[2];
    int f8;
    int fc;
    int f10;
    int f14[4];
    int f24;
    int f28;
    int f2c;
    int f30[3];
    void (*f3c)(int, int, void *, int);
    int f40;
    int f44;
    int f48;
    Copy8_d59c8 f4c;
} S_d59c8;
extern void FUN_020d5e78(int);
extern void FUN_020d5918(S_d59c8 *);
extern int FUN_020c7824(void);
void FUN_020d59c8(S_d59c8 *a, int b, int c, Copy8_d59c8 *d) {
    a->f44 = b;
    a->f48 = c;
    if (d != 0) {
        a->f4c = *d;
    }
    if ((unsigned int)(b - 1) <= 1) {
        a->f10 = 3;
        a->f3c(a->f44, a->f48, &a->f4c, a->f40);
        FUN_020d5e78(a->f8);
    } else {
        FUN_020d5918(a);
        a->f10 = 5;
        a->f2c = FUN_020c7824() + 1000;
        a->f24 = 0;
        a->f28 = 5;
    }
}
