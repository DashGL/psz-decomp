// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S27174 {
    char pad[0x100];
    unsigned short f100;
    unsigned short f102;
    int f104;
};
extern int FUN_020683d4(void);
extern int FUN_020271f8(void *);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);

int FUN_02027174(void *a, int b, int c, int *d, int e) {
    struct S27174 *v4 = *(struct S27174 **)((char *)a + 0x68);
    int s;
    int r;
    if (c > b) {
        c = b;
    }
    s = FUN_020683d4();
    while (1) {
        r = FUN_020271f8(a);
        if (r >= c) {
            unsigned short *p100 = &v4->f100;
            unsigned short v = *p100;
            if (r >= b) {
                r = b;
            }
            *d = v;
            break;
        }
        if ((e & 1) == 0) {
            r = 0;
            break;
        }
        FUN_020669dc(&v4->f104);
    }
    FUN_020683e8(s);
    return r;
}
