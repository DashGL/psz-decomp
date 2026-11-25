// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern int FUN_020c6e0c(int);
extern const char D_020fcc50[];
extern const char D_020fcc24[];
extern const char D_020fcbd8[];

struct Arr {
    int *data;
    int len;
};

int FUN_020c71d8(struct Arr *p) {
    int i;
    int sum = 0;
    if (p == 0) {
        FUN_02000edc(D_020fcc50, D_020fcc24, D_020fcbd8, 0x61);
    }
    if (p == 0) {
        return 0;
    }
    for (i = 0; i < p->len; i++) {
        sum += FUN_020c6e0c(p->data[i]);
    }
    return sum;
}
