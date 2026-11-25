// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
typedef struct { int w[54]; } S0xd8;
extern int FUN_020c7824(void);
extern int FUN_020d5544(int, void *);
extern int FUN_020d554c(void *);
extern void FUN_020c7478(int);
extern int DAT_0211d744[];
extern S0xd8 DAT_0211d770;
extern int DAT_0211d7c4[];
extern int DAT_020feb28[];

int FUN_020d5c90(int param_1) {
    int res = 1;
    if (param_1 != -1) {
        if ((unsigned int)(FUN_020c7824() - DAT_0211d744[4]) < 10000) {
            res = FUN_020d5544(param_1, &DAT_0211d770);
        } else {
            res = 0;
        }
        if (res == 0) {
            int x = FUN_020d554c(&DAT_0211d770);
            ((void (*)(int, S0xd8))DAT_0211d744[3])(x, DAT_0211d770);
            DAT_020feb28[0] = DAT_0211d7c4[14];
            DAT_0211d744[2] = DAT_0211d7c4[15];
            if (DAT_020feb28[2] != -1) {
                FUN_020c7478(DAT_020feb28[2]);
            }
            DAT_020feb28[2] = -1;
            if (DAT_020feb28[1] != -1) {
                FUN_020c7478(DAT_020feb28[1]);
            }
            DAT_020feb28[1] = -1;
        }
    }
    return res;
}
