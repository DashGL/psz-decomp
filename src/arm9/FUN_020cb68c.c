// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p
struct S20 {
    char *f0;
    int f4;
    int f8;
    int fc;
};
extern const char DAT_020fd4b8[];
extern const char DAT_020fd4c0[];
extern const char DAT_020fd4c4[];
extern char *FUN_02003f6c(const char *, int);
extern int FUN_02003f38(const char *, const char *, int);
extern int FUN_020d191c(const char *, const char *, char *, int);
extern int FUN_02005898(const char *);

int FUN_020cb68c(int param_1, struct S20 *param_2, char **param_3, int *param_4, int *param_5) {
    char buf[0x10];
    *param_3 = 0;
    if (param_2->f8 >= 5) {
        char *r4 = FUN_02003f6c(param_2->f0, 0xa);
        if (r4 != 0) {
            int len;
            if (FUN_02003f38(r4 - 5, DAT_020fd4b8, 5) != 0) {
                return 3;
            }
            *r4 = 0;
            if (FUN_020d191c(param_2->f0, DAT_020fd4c0, buf, 0x10) == 0) {
                return 3;
            }
            *param_4 = FUN_02005898(buf);
            if (FUN_020d191c(param_2->f0, DAT_020fd4c4, buf, 0x10) == 0) {
                return 3;
            }
            len = FUN_02005898(buf);
            if (param_2->f8 > (len + 1) + (r4 - param_2->f0)) {
                if (r4[len + 1] != 0) {
                    return 3;
                }
                *param_3 = r4 + 1;
                *param_5 = len;
                param_2->fc = (len + 1) + (r4 - param_2->f0) + 1;
            } else {
                *r4 = 0xa;
            }
        }
        return 0;
    }
    return 0;
}
