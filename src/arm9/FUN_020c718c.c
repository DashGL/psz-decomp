// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern void FUN_020c6de0(int);
extern void FUN_020c7bec(void *);
extern const char D_020fcc50[];
extern const char D_020fcc24[];
extern const char D_020fcbc0[];

struct Arr {
    int *data;
    int len;
};

void FUN_020c718c(struct Arr *p) {
    int i;
    if (p == 0) {
        FUN_02000edc(D_020fcc50, D_020fcc24, D_020fcbc0, 0x51);
    }
    if (p == 0) {
        return;
    }
    for (i = 0; i < p->len; i++) {
        FUN_020c6de0(p->data[i]);
    }
    FUN_020c7bec(p->data);
    FUN_020c7bec(p);
}
