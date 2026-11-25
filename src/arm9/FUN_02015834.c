// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02015538(void *a, int b, int c, int d, int e, int f);
extern void FUN_02015578(void *a, int b, int c, int d, int e);
extern void FUN_020155b8(void *a, int b, int c, int d, int e);

void FUN_02015834(void *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
    switch (param_2) {
    case 0:
        FUN_02015538(param_1, param_3, param_4, param_5, param_6, param_7);
        break;
    case 1:
        FUN_02015578(param_1, param_4, param_5, param_6, param_7);
        break;
    case 2:
        FUN_020155b8(param_1, param_4, param_5, param_6, param_7);
        break;
    }
}
