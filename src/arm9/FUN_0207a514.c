// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9e, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020473e8(char *, int, int);
extern int FUN_0200a3a0(int, int);
extern void FUN_020bf680(char *, int *, int);
extern void FUN_020c0488(char *);
extern void FUN_02047798(char *, char *);

void FUN_0207a514(char *param_1, char *param_2, int param_3, int param_4, int param_5) {
    int sp00[2];
    FUN_020473e8(param_1, (int)param_2, 0);
    *(int *)(param_1 + 0x104) = param_4;
    *(int *)(param_1 + 0x108) = param_5;
    *(int *)(param_1 + 0x110) = *(int *)(param_2 + 0x5c);
    *(int *)(param_1 + 0x114) = param_3;
    *(int *)(param_1 + 0x118) = FUN_0200a3a0(*(int *)(param_1 + 0x114) - 1, 5);
    *(int *)(param_1 + 0x10c) = 0;
    *(unsigned short *)(param_1 + 0x11c) = *(unsigned short *)(param_1 + 0x68);
    *(unsigned short *)(param_1 + 0x11e) = *(unsigned short *)(param_1 + 0x6a);
    sp00[0] = *(int *)(param_1 + 0x5c);
    sp00[1] = *(int *)(param_1 + 0x64);
    FUN_020bf680(param_1 + 0x120, sp00, 0x800);
    FUN_020c0488(param_1 + 0x144);
    FUN_02047798(param_1 + 0x150, param_1 + 0x120);
    *(int *)(param_1 + 0x14c) = 0x1000;
    *(int *)(param_1 + 0x178) = -1;
}
