// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int FUN_0202595c(unsigned char *, unsigned char **);

int FUN_02025990(unsigned char *param_1, unsigned int *param_2) {
    unsigned char *endp;
    unsigned int val = 0;
    int i;

    for (i = 0; i < 4; i++) {
        unsigned int part = FUN_0202595c(param_1, &endp);
        if (param_1 == endp) {
            return 0;
        }
        param_1 = endp;
        if (part > 0xff || (i != 3 && *param_1++ != '.') || (i == 3 && *param_1 != 0)) {
            return 0;
        }
        val = (val << 8) | part;
    }
    *param_2 = val;
    return 1;
}
