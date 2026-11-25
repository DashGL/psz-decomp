// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
struct Elem {
    int f0;
    int f4;
};

struct S {
    int f0;
    int f4;
    void *f8;
};

extern void FUN_020d9800(struct S *);
extern void *FUN_020c6da8(int, int, int);
extern int FUN_020d915c(const unsigned char *, int);
extern int FUN_020d90c8(struct S *, const unsigned char *);
extern void FUN_020c6e28(void *, struct Elem *);

int FUN_020da05c(struct S *r6, const unsigned char *r5, int r4) {
    struct Elem e;
    int len;
    int cnt = *r5;
    r5++;
    r4--;
    if (r6->f8 != 0) {
        FUN_020d9800(r6);
    }
    r6->f8 = FUN_020c6da8(8, cnt, 0);
    if (r6->f8 == 0) {
        return 5;
    }
    int r7 = 0;
    for (; r7 < cnt; r7++) {
        if (r4 < 2) {
            return 4;
        }
        len = FUN_020d915c(r5 + 1, r4 - 1);
        if (len == -1) {
            return 4;
        }
        e.f4 = *r5;
        e.f0 = FUN_020d90c8(r6, r5 + 1);
        FUN_020c6e28(r6->f8, &e);
        r5 += len + 1;
        r4 -= len + 1;
    }
    return 0;
}
