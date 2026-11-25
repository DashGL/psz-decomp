// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
struct Pair {
    int f0;
    int f4;
};

struct Node {
    int f0;
    int f4;
    void *f8;
    int fc;
};

extern char DAT_020fd4f4[];
extern char DAT_020fd508[];
extern char DAT_020fd4dc[];
extern char DAT_020fd518[];
extern char DAT_020fd530[];
extern void FUN_02000edc(char *, char *, char *, int);
extern struct Node *FUN_020c7bcc(int);
extern void FUN_020cb81c(void *, struct Pair, struct Node *, int, int);

void FUN_020cb778(void **r7, int r6, int r5) {
    char *r4 = (char *)*r7;
    if (r4 == 0) {
        FUN_02000edc(DAT_020fd4f4, DAT_020fd508, DAT_020fd4dc, 0x23);
    }
    if (r6 == 0) {
        FUN_02000edc(DAT_020fd518, DAT_020fd508, DAT_020fd4dc, 0x24);
    }
    if (r5 != 1 && r5 != 0) {
        FUN_02000edc(DAT_020fd530, DAT_020fd508, DAT_020fd4dc, 0x25);
    }
    if (r5 == 1) {
        *(int *)(r4 + 0x5bc) = 1;
    }
    struct Pair p = *(struct Pair *)(r4 + 0x1a8);
    if (p.f0 != 0) {
        struct Node *n = FUN_020c7bcc(0x10);
        if (n != 0) {
            n->f0 = r6;
            n->fc = r5;
            n->f4 = *(int *)(r4 + 0x5b8);
            n->f8 = r4;
        }
        FUN_020cb81c(r7, p, n, 0, 1);
    }
}
