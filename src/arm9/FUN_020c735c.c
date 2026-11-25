// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern void FUN_020c6fa8(int, int, int);
extern const char D_020fcc68[];
extern const char D_020fcc24[];
extern const char D_020fcbfc[];

struct Arr {
    int *data;
    int len;
};

void FUN_020c735c(struct Arr *p, int a, int b) {
    if (a == 0) {
        FUN_02000edc(D_020fcc68, D_020fcc24, D_020fcbfc, 0xb6);
    }
    int i = 0;
    for (; i < p->len; i++) {
        FUN_020c6fa8(p->data[i], a, b);
    }
}
