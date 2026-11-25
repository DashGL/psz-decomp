// flags: -O4,p
#pragma opt_common_subs off
extern int ***FUN_020c76cc(void);
extern int FUN_020c7724(int *);

int FUN_020d52f8(void) {
    int r = 0;
    int ***p = FUN_020c76cc();
    if (p == 0) {
        return r;
    }
    for (int i = 0; ; i++) {
        int *q = p[3][i];
        if (q == 0) {
            break;
        }
        if (*q != 0x0100007f) {
            r = *q;
            if (FUN_020c7724(q) != 0) {
                return r;
            }
        }
    }
    return r;
}
