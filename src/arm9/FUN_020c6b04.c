// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
extern int FUN_020c6c04(void *);
extern void *FUN_020c6bd8(void *);
extern int FUN_0205c520(int, int);
extern void FUN_0209e6c4(void *, void *);
extern void *FUN_020c6c24(void *);
extern void FUN_020656b8(void *, int, int);

void FUN_020c6b04(void *a0, int a1, int a2) {
    char *r7;
    int off;
    int sp00;
    void *r4;
    void *r1;
    if (a2 < 0) {
        a2 = 0;
    }
    if (a1 < 0 || a1 >= 3) {
        return;
    }
    r7 = (char *)a0 + 0x2c;
    off = a1 * 0x30;
    if (*(int *)(r7 + off) == 0) {
        return;
    }
    sp00 = 0;
    if (a1 == FUN_020c6c04(a0)) {
        sp00 = 1;
    }
    *(int *)(r7 + off) = 0;
    if (sp00 == 0) {
        return;
    }
    r4 = FUN_020c6bd8((char *)a0 + 0xe8);
    if (r4 == 0) {
        return;
    }
    *(int *)((char *)a0 + 0x120) = 0;
    *(int *)((char *)a0 + 0x11c) = (a2 == 0) ? 0x1000 : FUN_0205c520(0x1000, a2 * 0x1e);
    *(int *)((char *)a0 + 0x118) = 1;
    FUN_0209e6c4((char *)a0 + 0xbc, r4);
    r1 = FUN_020c6c24(a0);
    if (r1 != 0) {
        FUN_0209e6c4((char *)a0 + 0x90, r1);
    } else {
        FUN_0209e6c4((char *)a0 + 0x90, (char *)a0 + 0xbc);
        FUN_020656b8((char *)a0 + 0x9c, 0, 0x20);
    }
    *(unsigned char *)((char *)a0 + 0xe8) = *(unsigned char *)((char *)a0 + 0x90);
    *(unsigned char *)((char *)a0 + 0xe9) = *(unsigned char *)((char *)a0 + 0x91);
    *(int *)((char *)a0 + 0x114) = 1;
}
