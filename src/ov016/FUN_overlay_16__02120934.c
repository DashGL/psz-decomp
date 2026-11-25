// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
void FUN_02068450(void);
void FUN_overlay_16__0211e838(void *, int, int, int);

void FUN_overlay_16__02120934(char *ctx, void *arg1) {
    int res;

    while (*(volatile int *)(ctx + 0x4bc) != 1) {
    }
    res = 0;
    *(int *)(ctx + 0x4bc) = 0;
    if (*(int *)(ctx + 0x494) == 0) {
        FUN_02068450();
        if (*(int *)(ctx + 0x4a8) > 10) {
            res = 1;
        }
    }
    FUN_overlay_16__0211e838(arg1, 0x06800000, 0x100, res);
}
