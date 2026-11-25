// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char *f0;
    char *f4;
    char *f8;
    int fc;
} Buf_df018;
extern int DAT_021005d4;
extern int DAT_021005c0;
extern void FUN_02065774(char *, char *, int);
int FUN_020df018(char *a, Buf_df018 *b, int c) {
    char *(*r2)(void *, int) = *(char *(**)(void *, int))(a + 0x1010);
    void (*r7)(void *, char *, int) = *(void (**)(void *, char *, int))(a + 0x1014);
    char *r4;
    if (c <= 0) {
        return 0;
    }
    r4 = r2(&DAT_021005d4, b->fc + c);
    if (r4 == 0) {
        return 0;
    }
    FUN_02065774(b->f0, r4, b->fc);
    r7(&DAT_021005c0, b->f0, 0);
    if (r4 == 0) {
        return 0;
    }
    b->f4 += r4 - b->f0;
    b->fc += c;
    b->f0 = r4;
    b->f8 = r4 + b->fc;
    return 1;
}
