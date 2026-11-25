// flags: -O4,p
// near: 11 byte diffs (spills param_5 to [sp, #8] in target vs reusing incoming stack arg slot [sp, #0x20])
struct S5 {
    int f0;
    int f4;
    int f8;
    short fc;
    short fe;
    int pad[3];
    char *f1c;
    int f20;
    int f24;
};

extern struct S5 *FUN_020cf0f8(int, int, int);
extern struct S5 *FUN_020cf138(int, int, int);
extern char *FUN_020c7bdc(char *, int);
extern void FUN_020c7bec(char *);
extern void FUN_020d1b74(int, const char *);
extern void FUN_020cb778(int, int, int);
extern void FUN_020014d4(char *, const void *, int);
extern const char DAT_020fdf1c[];

void FUN_020cf404(int param_1, short param_2, const void *param_3, int param_4, int unused, void *param_5) {
    int conn = (int)param_5;
    struct S5 *r4 = FUN_020cf0f8(conn, param_1, param_2);
    int cap;
    int len;
    char *buf;
    if (r4 == 0) {
        r4 = FUN_020cf138(conn, -1, 0);
        if (r4 == 0) {
            return;
        }
        r4->f0 = 0x68;
        r4->f8 = param_1;
        r4->fc = param_2;
    }
    cap = r4->f20;
    len = r4->f24;
    buf = r4->f1c;
    if (param_4 > cap - len) {
        int add = 0x800;
        char *nbuf;
        if (param_4 >= add) {
            add = param_4;
        }
        cap = len + add;
        nbuf = FUN_020c7bdc(buf, cap + 1);
        if (nbuf == 0) {
            FUN_020c7bec(buf);
            FUN_020d1b74(conn, DAT_020fdf1c);
            FUN_020cb778(conn, 1, 0);
            return;
        }
        buf = nbuf;
    }
    FUN_020014d4(buf + len, param_3, param_4);
    r4->f1c = buf;
    r4->f24 += param_4;
    r4->f20 = cap;
    buf[r4->f24] = 0;
}
