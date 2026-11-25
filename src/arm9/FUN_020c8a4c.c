// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
extern void FUN_020d1b74(void *, const void *);
extern int FUN_020cdec0(void *, int, int, int, void (*)(void *, void *, int), int);
extern const char DAT_020fcd90[];
extern const char DAT_020fcda4[];

int FUN_020c8a4c(int *param_1, int param_2, int param_3, int param_4, void (*param_5)(void *, void *, int), int param_6) {
    int r5;
    if (param_1 == 0 || (r5 = *param_1) == 0 || param_2 == 0) {
        return 2;
    }
    if (param_5 == 0) {
        FUN_020d1b74(param_1, DAT_020fcd90);
        return 2;
    }
    if (*(int *)(r5 + 0x108) != 0) {
        int buf[129] = {0};
        param_5(param_1, buf, param_6);
        return 0;
    }
    if (*(int *)(r5 + 0x1f4) == 4) {
        FUN_020d1b74(param_1, DAT_020fcda4);
        return 2;
    }
    return FUN_020cdec0(param_1, param_2, param_3, param_4, param_5, param_6);
}
