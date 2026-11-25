// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned long long FUN_02067e0c(void);
extern int FUN_020dc148(void *, int);
extern void FUN_020dc2ac(void *, void *, int, int);
extern char DAT_020ec174[];
extern char DAT_020ec17c[];
int FUN_020dbecc(char *a) {
    if (((FUN_02067e0c() - *(unsigned long long *)(a + 0xcb0)) << 6) / 0x82eaULL >= 300ULL) {
        a[0xd11] += 2;
        if (a[0xd11] >= 13) {
            return FUN_020dc148(a, 3);
        }
        *(unsigned long long *)(a + 0xcb0) = FUN_02067e0c();
        FUN_020dc2ac(DAT_020ec174, DAT_020ec17c, a[0xd11], 0x200000);
    }
    return 3;
}
