// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
extern int FUN_020d3950(int, int, int);
extern int FUN_020d39bc(int, int, int);
extern int FUN_020d3a28(int, int, int);
extern int FUN_020d3abc(int, int, int);
extern int FUN_020d3b78(int);
extern int FUN_020d3bac(int, int, int);
extern int FUN_020d3bf4(int);

int FUN_020d3c24(int param_1, int param_2, int param_3, int param_4) {
    (*(unsigned short *)(param_1 + 0x66))++;
    if (param_2 == 0) {
        if (!FUN_020d3950(param_1, param_3, param_4)) return 0;
    } else if (param_2 == 1) {
        if (!FUN_020d39bc(param_1, param_3, param_4)) return 0;
    } else if (param_2 == 2) {
        if (!FUN_020d3a28(param_1, param_3, param_4)) return 0;
    } else if (param_2 == 3) {
        if (!FUN_020d3abc(param_1, param_3, param_4)) return 0;
    } else if (param_2 == 4) {
        if (!FUN_020d3b78(param_1)) return 0;
    } else if (param_2 == 5) {
        if (!FUN_020d3bac(param_1, param_3, param_4)) return 0;
    } else if (param_2 == 6) {
        if (!FUN_020d3bf4(param_1)) return 0;
    }
    return 1;
}
