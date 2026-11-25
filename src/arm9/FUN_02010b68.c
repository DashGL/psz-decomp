// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0206719c(void *);
extern void FUN_02010884(void *);
extern void FUN_0200e0e4(void *);
extern void FUN_02067220(void *);
extern int DAT_02103148;
extern int DAT_021028b4[];

void FUN_02010b68(int param_1, int param_2, char *param_3) {
    if (param_1 != *(int *)(param_3 + 0x12c)) {
        return;
    }
    FUN_0206719c(&DAT_02103148);
    if (DAT_021028b4[1] != 0) {
        FUN_0206719c((char *)DAT_021028b4[1] + 0x4c8);
    }
    FUN_02010884(param_3);
    *(int *)(param_3 + 0x12c) = 0;
    *(int *)(param_3 + 0x130) = 0;
    *(unsigned char *)(param_3 + 0x124) = 0;
    if (*(int *)(param_3 + 0x120) > 0) {
        FUN_0200e0e4(param_3);
        *(int *)(param_3 + 0x120) = 0;
    }
    FUN_02067220(&DAT_02103148);
    if (DAT_021028b4[1] != 0) {
        FUN_02067220((char *)DAT_021028b4[1] + 0x4c8);
    }
}
