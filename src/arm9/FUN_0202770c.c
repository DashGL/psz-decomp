// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02027fc0(void *);
extern int FUN_02027f8c(void *);
extern void FUN_02025fb4(int, int);
extern void *FUN_02025f40(void (*)(void), void *, int);
extern void FUN_02026000(void *, void *);
extern void FUN_020277dc(void);

int FUN_0202770c(void *a0) {
    if ((int)a0 <= 0) {
        return -0x1c;
    }
    if (FUN_02027fc0(a0) != 0) {
        return -0x1a;
    }
    if (FUN_02027f8c(a0) != 0) {
        return 0;
    }
    int b0 = 0;
    if (a0 != 0) {
        short f = *(volatile short *)((char *)a0 + 0x70);
        if (f & 1) {
            b0 = 1;
        }
    }
    if (!b0) {
        return -0x27;
    }
    if ((*(volatile short *)((char *)a0 + 0x70) & 0x10) != 0) {
        return -0x1a;
    }
    *(volatile short *)((char *)a0 + 0x70) |= 0x18;
    int b1 = 1;
    signed char st = *(signed char *)((char *)a0 + 0x73);
    if (st != 0 && st != 4) {
        b1 = 0;
    }
    if (b1) {
        FUN_02025fb4(*(int *)((char *)a0 + 0x68), 0);
    }
    void *r1 = FUN_02025f40(FUN_020277dc, a0, 1);
    *(int *)((char *)r1 + 8) = 0;
    FUN_02026000(a0, r1);
    return 0;
}
