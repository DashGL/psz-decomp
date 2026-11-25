// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -O4,p

struct PairCF644 {
    int f0;
    int f4;
};

struct ReqCF644 {
    int f0;
    int f4;
    int f8;
    struct PairCF644 fc;
};

extern const char DAT_020fdfc8[];
extern const char DAT_020fdfd0[];
extern const char DAT_020fe000[];
extern const char DAT_020fe00c[];
extern int FUN_020d1888(void *, const char *, int);
extern int FUN_02003f38(const char *, const char *, int);
extern void FUN_020d1b58(void *, int, const char *);
extern void FUN_020cb778(void *, int, int);
extern int FUN_020d191c(const char *, const char *, char *, int);
extern int FUN_02005898(char *);
extern struct PairCF644 *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, const char *);
extern int FUN_020cb81c(void *, struct PairCF644, struct PairCF644 *, struct ReqCF644 *, int);
extern void FUN_020ce7d0(void *, struct ReqCF644 *);

int FUN_020cf644(void *self, struct ReqCF644 *req, const char *str) {
    char buf[0x10];
    int val;
    struct PairCF644 cb;

    if (FUN_020d1888(self, str, 1) != 0) {
        return 4;
    }
    if (FUN_02003f38(str, DAT_020fdfc8, 5) != 0) {
        FUN_020d1b58(self, 1, DAT_020fdfd0);
        FUN_020cb778(self, 3, 1);
        return 3;
    }
    if (FUN_020d191c(str, DAT_020fe000, buf, 0x10) == 0) {
        FUN_020d1b58(self, 1, DAT_020fdfd0);
        FUN_020cb778(self, 3, 1);
        return 3;
    }
    val = FUN_02005898(buf);
    cb.f0 = req->fc.f0;
    cb.f4 = req->fc.f4;
    if (cb.f0 != 0) {
        struct PairCF644 *node = FUN_020c7bcc(8);
        if (node == 0) {
            FUN_020d1b74(self, DAT_020fe00c);
            return 1;
        }
        node->f4 = val;
        node->f0 = 0;
        int err = FUN_020cb81c(self, cb, node, req, 0);
        if (err != 0) {
            return err;
        }
    }
    FUN_020ce7d0(self, req);
    return 0;
}
