// flags: -O4,s
extern char *FUN_0203686c(void *, int);
extern int FUN_0207f8dc(void *, int);
extern int FUN_0205c520(int, int);
extern int FUN_0207f770(void *);
extern int FUN_02035d04(void *);

static inline int FX_Mul(int a, int b) {
    return (int)(((long long)a * b + 0x800LL) >> 12);
}

void FUN_02035bb8(char *self, int *out, int index) {
    char *container = *(char **)(self + 0x14);
    char *entries = *(char **)(container + 0x10);
    char *record = FUN_0203686c(self, *(signed char *)(entries + index * 24 + 1));
    short *stats = (short *)(self + 0x18);
    void *sub;
    int i;

    if (out[0] != 2) {
        out[1] = stats[3];
        out[1] = FX_Mul(out[1], FUN_0207f8dc(self + 0x64, 1));
        out[11] = FUN_0205c520(0x1000, *(int *)record);
        out[16] = stats[7];
        out[16] = FX_Mul(out[16], *(int *)(record + 4));
        out[16] = FX_Mul(out[16], FUN_0207f8dc(self + 0x64, 1));
    }

    out[19] = stats[8];
    out[25] = stats[0];
    sub = self + 0x64;
    out[27] = FUN_0207f770(sub);
    out[28] = FUN_0207f770(sub);
    out[4] = *(signed char *)(record + 8);
    out[5] = *(signed char *)(record + 9);

    for (i = 0; i < 5; i++) {
        out[6 + i] = FX_Mul(*(signed char *)(record + 10 + i), FUN_0207f8dc(self + 0x64, 1));
    }

    out[12] = *(signed char *)(record + 15);
    out[14] = *(signed char *)(record + 16);

    if (!(*(int *)(self + 0x90) != 3) != 0) {
        out[13] = -1;
        out[15] = -1;
    }

    out[22] = FUN_02035d04(self);
}
