// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202ade4(void *);
extern int FUN_0202a94c(void *);
extern void FUN_02029d44(void *);
extern int FUN_0202b238(void *);
extern void FUN_0202ac8c(void *);
extern void FUN_0202af78(void *);
extern void FUN_02029ce4(void *);
extern void FUN_02028938(void *, int, unsigned short);

int FUN_0202b268(void *a0) {
    void *r4 = *(void **)((char *)a0 + 0xc);
    int r0;
    FUN_0202ade4(a0);
    do {
        r0 = FUN_0202a94c(a0);
        if (r0 == 9) {
            return 1;
        }
    } while (r0 != 4 && *(unsigned char *)((char *)r4 + 0x31) == 0);
    if (*(unsigned char *)((char *)r4 + 0x31) != 0) {
        FUN_02029d44(r4);
        if (FUN_0202b238(a0) != 0) {
            return 1;
        }
        FUN_0202ac8c(a0);
    } else {
        FUN_0202af78(a0);
        FUN_02029ce4(r4);
        if (*(unsigned char *)((char *)r4 + 0x30) != 0) {
            FUN_02028938(r4, *(int *)((char *)a0 + 0x1c), *(unsigned short *)((char *)a0 + 0x18));
        }
        FUN_02029d44(r4);
        FUN_0202ac8c(a0);
        if (FUN_0202b238(a0) != 0) {
            return 1;
        }
    }
    *(unsigned char *)((char *)r4 + 0x455) = 8;
    return 0;
}
