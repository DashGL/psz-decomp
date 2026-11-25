// flags: -O4,s
extern void FUN_02075068(void *, int);
struct Rec_0219e25c {
    int pad0[6];
    int f18;
    int f1c;
    int pad1;
    int f24;
    int pad2[37];
};
void FUN_overlay_21__0219e25c(int *p) {
    int *c = (int *)p[1];
    struct Rec_0219e25c *records = (struct Rec_0219e25c *)c[59];
    int i;
    struct V { int x, y, z; };
    *(struct V *)(c + 14) = *(struct V *)(c + 63);
    if (p[8] != -1) {
        FUN_02075068(c, p[8]);
        p[8] = -1;
    }
    if (p[9] != -1) {
        FUN_02075068(c, p[8]);
        p[9] = -1;
    }
    for (i = 0; i < 4; i++) {
        records[i].f18 = 1;
        records[i].f1c = 0;
        records[i].f24 = 0;
    }
}
