// flags: -O4,p
extern int DAT_020fca28[2];
extern char DAT_0211b3ec[];
extern int FUN_020c4870(int, void *, int *);
int FUN_020c1298(int *first, int *second) {
    int failed = 0;
    switch (DAT_020fca28[1]) {
    case -1: {
        int valid = 0;
        int status = DAT_020fca28[0];
        if (status != -1 && status != 107) {
            valid = 1;
        }
        if (valid == 1) {
            if (!FUN_020c4870(1, DAT_0211b3ec, &DAT_020fca28[1])) {
                failed = 1;
            }
        }
        break;
    }
    case 107:
        break;
    default:
        failed = 1;
        break;
    }
    if (failed == 1) {
        *first = DAT_020fca28[0];
        *second = DAT_020fca28[1];
        return 1;
    }
    return 0;
}
