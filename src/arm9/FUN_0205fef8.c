// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *DAT_021180ac;
extern int FUN_020683d4(void);
extern int FUN_02061278(int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020683e8(int);

void *FUN_0205fef8(int a) {
    int s = FUN_020683d4();
    if (DAT_021180ac != 0 && FUN_02061278(a) != 0) {
        char *p = DAT_021180ac;
        FUN_02065774(p + 0x1340 + (a - 1) * 0x16, p + 0x1772, 0x16);
        FUN_020683e8(s);
        return DAT_021180ac + 0x1772;
    }
    FUN_020683e8(s);
    return 0;
}
