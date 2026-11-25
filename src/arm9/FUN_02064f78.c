// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065178(int, void *, void *, unsigned int);
extern void FUN_02065010(int);
extern void FUN_02065d44(int, void (*)(void *), void *);
extern void FUN_01ff8000(int, void *, void *, unsigned int);

void FUN_02064f78(int param_1, void *param_2, void *param_3, unsigned int param_4, void (*param_5)(void *), void *param_6) {
    FUN_02065178(param_1, param_2, (void *)param_4, 0);
    if (param_4 == 0) {
        if (param_5 == 0) {
            return;
        }
        param_5(param_6);
        return;
    }
    FUN_02065010(param_1);
    if (param_5 != 0) {
        FUN_02065d44(param_1, param_5, param_6);
        FUN_01ff8000(param_1, param_2, param_3, (param_4 >> 2) | 0xc4000000);
        return;
    }
    FUN_01ff8000(param_1, param_2, param_3, (param_4 >> 2) | 0x84000000);
}
