// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_021004ec;
extern int DAT_02100504;
extern void FUN_020df4b0(char *, char *, int);
extern void FUN_020deff0(char *, char *);
extern void FUN_020656b8(char *, int, int);
void FUN_020decec(char *a) {
    void (*r4)(void *, int, int) = *(void (**)(void *, int, int))(a + 0x1014);
    if (a != 0) {
        FUN_020df4b0(a, a + 0x1a38, 0x20);
        FUN_020deff0(a, a + 0x1a08);
        FUN_020deff0(a, a + 0x19f8);
        if (*(int *)(a + 0x19cc) != 0) {
            r4(&DAT_021004ec, *(int *)(a + 0x19cc), 0);
            *(int *)(a + 0x19cc) = 0;
        }
        if (*(int *)(a + 0x19d0) != 0) {
            r4(&DAT_02100504, *(int *)(a + 0x19d0), 0);
            *(int *)(a + 0x19d0) = 0;
        }
        FUN_020656b8(a, 0, 0x1c14);
    }
}
