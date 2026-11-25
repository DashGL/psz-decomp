// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02027f8c(void *);
extern int FUN_02026620(void *);
extern int DAT_020f696c;

int FUN_02026538(void *a0, short a1, int a2) {
    int b0, b1;
    if (FUN_02027f8c(a0) != 0 || (*(volatile short *)((char *)a0 + 0x70) & 8) != 0) {
        return -0x1c;
    }
    b0 = 0;
    if (a0 != 0) {
        short f = *(volatile short *)((char *)a0 + 0x70);
        if (f & 1) {
            b0 = 1;
        }
    }
    if (!b0) {
        return -0x27;
    }
    {
        signed char s = *((signed char *)a0 + 0x73);
        b1 = 1;
        if (s != 0 && s != 4) {
            b1 = 0;
        }
    }
    if (b1) {
        int r0;
        if (*(volatile short *)((char *)a0 + 0x70) & 4) {
            return *((signed char *)a0 + 0x72) == 1 ? -0x1e : 0;
        }
        if (*(volatile short *)((char *)a0 + 0x70) & 2) {
            return (*(volatile short *)((char *)a0 + 0x70) & 0x40) ? *(int *)((char *)a0 + 0x6c) : DAT_020f696c;
        }
        *(short *)((char *)a0 + 0x76) = a1;
        *(int *)((char *)a0 + 0x78) = a2;
        r0 = FUN_02026620(a0);
        return *((signed char *)a0 + 0x72) == 1 ? r0 : -0x1a;
    }
    *(short *)((char *)a0 + 0x76) = a1;
    *(int *)((char *)a0 + 0x78) = a2;
    return 0;
}
