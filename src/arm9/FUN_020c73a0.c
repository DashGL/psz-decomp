// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern int FUN_020c6fc8(int, int, int);
extern const char D_020fcc68[];
extern const char D_020fcc24[];
extern const char D_020fcc0c[];

struct Arr {
    int *data;
    int len;
};

int FUN_020c73a0(struct Arr *p, int a, int b) {
    int i;
    if (a == 0) {
        FUN_02000edc(D_020fcc68, D_020fcc24, D_020fcc0c, 0xd3);
    }
    for (i = 0; i < p->len; i++) {
        int r = FUN_020c6fc8(p->data[i], a, b);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
