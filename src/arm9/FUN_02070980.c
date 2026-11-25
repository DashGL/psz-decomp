// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
extern const signed char DAT_020f25d4[];
extern int FUN_02039140(void *, int, int, int);
extern int FUN_02039108(void *, int, int, int);
extern void FUN_020391cc(void *, int);

void FUN_02070980(unsigned char *param_1, int param_2, unsigned short param_3) {
    switch (param_2) {
    case 2:
    case 3:
    case 6:
    case 7:
        if (FUN_02039140(param_1, DAT_020f25d4[param_2], *(int *)(param_1 + 0xd4), 4) != 0) {
            FUN_020391cc(param_1, 0);
            *(unsigned short *)(param_1 + 0xc0) = param_3;
            *(unsigned short *)(param_1 + 0xc2) = *(unsigned short *)(param_1 + 0xc0);
            *(int *)(param_1 + 0x240) = 7;
            param_1[0x1ff] = param_2;
        }
        break;
    case 0:
    case 1:
    case 4:
    case 5:
    case 8:
        if (FUN_02039108(param_1, DAT_020f25d4[param_2], *(int *)(param_1 + 0xd4), 0) != 0) {
            FUN_020391cc(param_1, 0);
            *(unsigned short *)(param_1 + 0xc0) = param_3;
            *(unsigned short *)(param_1 + 0xc2) = *(unsigned short *)(param_1 + 0xc0);
            *(int *)(param_1 + 0x240) = 7;
            param_1[0x1ff] = param_2;
        }
        break;
    }
}
