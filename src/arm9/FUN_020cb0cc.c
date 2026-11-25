// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p
struct S16 {
    char *buf;
    int cap;
    int len;
};

extern void FUN_02000edc(const char *, const char *, const char *, int);
extern char *FUN_020c7bdc(char *, int);
extern void FUN_020d1b74(int, const char *);
extern void FUN_020014d4(char *, const void *, int);

extern const char DAT_020fd3a4[];
extern const char DAT_020fd388[];
extern const char DAT_020fd334[];
extern const char DAT_020fd3b4[];
extern const char DAT_020fd370[];
extern const char DAT_020fd394[];

int FUN_020cb0cc(int param_1, struct S16 *param_2, const void *param_3, int param_4) {
    int len;
    int cap;
    char *buf;
    if (param_3 == 0) {
        FUN_02000edc(DAT_020fd3a4, DAT_020fd388, DAT_020fd334, 0x55);
    }
    if (param_4 < 0) {
        FUN_02000edc(DAT_020fd3b4, DAT_020fd388, DAT_020fd334, 0x56);
    }
    if (param_2 == 0) {
        FUN_02000edc(DAT_020fd370, DAT_020fd388, DAT_020fd334, 0x57);
    }
    if (param_3 == 0) {
        return 0;
    }
    len = param_2->len;
    cap = param_2->cap;
    buf = param_2->buf;
    if (cap - len < param_4) {
        int add = 0x800;
        if (param_4 >= add) {
            add = param_4;
        }
        cap += add;
        buf = FUN_020c7bdc(buf, cap + 1);
        if (buf == 0) {
            FUN_020d1b74(param_1, DAT_020fd394);
            return 1;
        }
    }
    FUN_020014d4(buf + len, param_3, param_4);
    buf[len + param_4] = 0;
    param_2->len += param_4;
    param_2->cap = cap;
    param_2->buf = buf;
    return 0;
}
