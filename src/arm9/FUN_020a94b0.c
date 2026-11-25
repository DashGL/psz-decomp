// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,p

extern void FUN_020a95a4(void);
extern void FUN_020a95d4(void);
extern void FUN_020a9604(void);
extern void FUN_020a9644(void);
extern void FUN_020a9684(void);
extern void FUN_020a96a8(void);
extern void FUN_020a96d0(void);
extern void FUN_02050018(int, void (*)(void), int, int);

int FUN_020a94b0(void *self, int cmd, int arg) {
    int ret = 0;
    switch (cmd) {
    case 0:
        break;
    case 1:
        FUN_02050018(0x18, FUN_020a95a4, 0, arg);
        ret = 1;
        break;
    case 2:
        FUN_02050018(0x18, FUN_020a95a4, 1, arg);
        ret = 1;
        break;
    case 3:
        FUN_02050018(0x18, FUN_020a95d4, 0, arg);
        ret = 1;
        break;
    case 4:
        FUN_02050018(0x18, FUN_020a95d4, 1, arg);
        ret = 1;
        break;
    case 5:
        FUN_02050018(0x18, FUN_020a9604, 0, 0);
        ret = 1;
        break;
    case 6:
        FUN_02050018(0x18, FUN_020a9604, 1, 0);
        ret = 1;
        break;
    case 7:
        FUN_02050018(0x18, FUN_020a9644, 0, 0);
        ret = 1;
        break;
    case 8:
        FUN_02050018(0x18, FUN_020a9644, 1, 0);
        ret = 1;
        break;
    case 9:
        FUN_02050018(0x18, FUN_020a9684, 0, 0);
        ret = 1;
        break;
    case 10:
        FUN_02050018(0x18, FUN_020a96a8, 0, 0);
        ret = 1;
        break;
    case 11:
        FUN_02050018(0x18, FUN_020a96d0, arg, 0);
        ret = 1;
        break;
    }
    return ret;
}
