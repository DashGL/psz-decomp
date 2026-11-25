// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
extern void FUN_020d52c8(void *, void *);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020c6e0c(int);
extern void FUN_020d2ee8(void *, int, void *, int, int);
extern int FUN_020d4b70(void *, void *, int, int);
extern const char DAT_020fea40[];
extern const char DAT_020fea7c[];
extern const char DAT_020fea08[];

int FUN_020d3600(void *a0, void *a1, int a2, int a3) {
    unsigned short sp04;
    if (*(int *)((char *)a0 + 0xc) != 5) {
        return 8;
    }
    FUN_020d52c8(&a1, &a2);
    if (a3 != 0 && *(int *)(*(int *)((char *)a0 + 8) + 0x40) == 2) {
        unsigned char *d = (unsigned char *)&sp04;
        unsigned char *p = (unsigned char *)a1;
        d[0] = p[0];
        d[1] = p[1];
        if (a2 != sp04 + *(int *)(*(int *)((char *)a0 + 8) + 0x44)) {
            FUN_02000edc(DAT_020fea40, DAT_020fea7c, DAT_020fea08, 0x103);
        }
        if (a2 != sp04 + *(int *)(*(int *)((char *)a0 + 8) + 0x44)) {
            return 9;
        }
    }
    if (FUN_020c6e0c(*(int *)((char *)a0 + 0x98)) != 0) {
        FUN_020d2ee8(a0, 0, a1, a2, a3);
        return 0;
    }
    if (FUN_020d4b70(a0, a1, a2, a3) != 0) {
        return 0;
    }
    return 0xa;
}
