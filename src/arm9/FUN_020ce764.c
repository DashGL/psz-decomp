// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc[3];
    int f18;
} Sub_ce764;
typedef struct {
    int f0;
    Sub_ce764 *f4;
} Node_ce764;
extern char DAT_020fde4c[];
extern char DAT_020fde00[];
extern char DAT_020fddb0[];
extern void FUN_02000edc(char *, char *, char *, int);
extern void FUN_020c7488(int, int);
extern void FUN_020c7478(int);
extern void FUN_020c7bec(void *);
void FUN_020ce764(char **a, Node_ce764 *b) {
    char *r2 = *a;
    if (b->f0 == 3) {
        Sub_ce764 *r4 = b->f4;
        *(int *)(r2 + 0x238) -= 1;
        if (*(int *)(r2 + 0x238) < 0) {
            FUN_02000edc(DAT_020fde4c, DAT_020fde00, DAT_020fddb0, 0xcd);
        }
        FUN_020c7488(r4->f4, 2);
        FUN_020c7478(r4->f4);
        FUN_020c7bec((void *)r4->f18);
        r4->f18 = 0;
        FUN_020c7bec((void *)r4->f8);
        r4->f8 = 0;
    }
    FUN_020c7bec(b->f4);
    b->f4 = 0;
    FUN_020c7bec(b);
}
