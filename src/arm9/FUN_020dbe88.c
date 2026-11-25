// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020dc2ac(void *, void *, int, int);
extern int D_020ec174;
extern int D_020ec17c;

int FUN_020dbe88(int a) {
    unsigned long long t = FUN_02067e0c();
    *(unsigned int *)(a + 0xcb0) = (unsigned int)t;
    *(unsigned int *)(a + 0xcb4) = (unsigned int)(t >> 32);
    *(signed char *)(a + 0xd11) = 0;
    t = FUN_02067e0c();
    *(unsigned int *)(a + 0xcb0) = (unsigned int)t;
    *(unsigned int *)(a + 0xcb4) = (unsigned int)(t >> 32);
    FUN_020dc2ac(&D_020ec174, &D_020ec17c, *(signed char *)(a + 0xd11), 0x200000);
    return 3;
}
