// flags: -O4,p
struct TargetCF268 {
    unsigned char pad0[0x14];
    int f14;
    unsigned char pad18[0x3c - 0x18];
    void *f3c;
};

extern const char DAT_020fdf78[];
extern const char DAT_020fdf7c[];
extern const char DAT_020fdf84[];
extern int FUN_02003c70(const char *);
extern int FUN_020cb184(void *, void *, const char *);
extern int FUN_020cb1a0(void *, void *, int);
extern int FUN_020cb0cc(void *, void *, const char *, int);
extern int FUN_020cb068(void *, void *, int);
extern void FUN_020c6e28(void *, void *);
extern int FUN_020c7788(int);

int FUN_020cf268(void *self, struct TargetCF268 *t, int a2, const char *str) {
    int len;
    int err;

    if (t == 0) {
        return 3;
    }
    if (str == 0) {
        return 3;
    }
    len = FUN_02003c70(str);
    {
        int req[6] = {0};
        req[4] = a2;
        err = FUN_020cb184(self, req, DAT_020fdf78);
        if (err == 0) {
            err = FUN_020cb1a0(self, req, a2);
            if (err == 0) {
                err = FUN_020cb184(self, req, DAT_020fdf7c);
                if (err == 0) {
                    err = FUN_020cb1a0(self, req, len);
                    if (err == 0) {
                        err = FUN_020cb184(self, req, DAT_020fdf84);
                        if (err == 0) {
                            req[5] = req[2];
                            err = FUN_020cb0cc(self, req, str, len);
                            if (err == 0) {
                                err = FUN_020cb068(self, req, 0);
                                if (err == 0) {
                                    FUN_020c6e28(t->f3c, req);
                                    t->f14 = FUN_020c7788(0) + 10000;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return err;
}
