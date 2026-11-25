// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
struct Elem {
    int f0;
    int f4;
};

struct S {
    int f0;
    int f4;
    void *f8;
};

extern char DAT_02100110[];
extern char DAT_021000a0[];
extern char DAT_02100028[];
extern int FUN_020c6e0c(void *);
extern struct Elem *FUN_020c6e10(void *, int);
extern int FUN_020d915c(const unsigned char *, int);
extern void FUN_02000edc(const char *, const char *, const char *, int);

int FUN_020d99a8(struct S *r7, const unsigned char *r5, int r4) {
    int cnt = FUN_020c6e0c(r7->f8);
    int r6 = 0;
    for (; r6 < cnt; r6++) {
        struct Elem *e = FUN_020c6e10(r7->f8, r6);
        switch (e->f4) {
        case 1:
            r5 += 1;
            r4 -= 1;
            break;
        case 2:
            r5 += 2;
            r4 -= 2;
            break;
        case 0:
            if (r4 < 1) {
                return 0;
            }
            {
                unsigned char c = *r5;
                r5++;
                r4--;
                if (c == 0xff) {
                    int len = FUN_020d915c(r5, r4);
                    if (len == -1) {
                        return 0;
                    }
                    r5 += len;
                    r4 -= len;
                }
            }
            break;
        default:
            FUN_02000edc(DAT_02100110, DAT_021000a0, DAT_02100028, 0x376);
            return 0;
        }
        if (r4 < 0) {
            return 0;
        }
    }
    return 1;
}
