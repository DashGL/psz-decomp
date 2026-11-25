// flags: -O4,p -noThumb
struct Pair_0205a624 {
    int a;
    int b;
};

struct Hw_0205a624 {
    int f0;
    int f4;
    int f8;
    int fc;
};

struct OvtCache {
    unsigned char *buf;
    unsigned int len;
};

extern void FUN_02065774(const void *, void *, int);
extern void FUN_02059cd4(void *);
extern void FUN_0205a504(void *, void *);
extern int FUN_02059f44(void *, struct Pair_0205a624);
extern void FUN_02059ffc(void *);
extern int FUN_0205a52c(int *, int, unsigned int, void *, int, int, int, int);
extern struct OvtCache DAT_0211252c;
extern struct OvtCache DAT_02112534;
extern unsigned char DAT_0211253c[];

int FUN_0205a624(int *arg0, int arg1, unsigned int arg2) {
    int file[18];
    struct Pair_0205a624 pair;
    struct OvtCache *tbl = (arg1 == 0) ? &DAT_0211252c : &DAT_02112534;
    unsigned char *ptr = tbl->buf;

    if (ptr != 0) {
        unsigned int pos = arg2 * 0x20; const void *src; if (!(pos < tbl->len)) return 0; src = ptr + pos;
        FUN_02065774(src, arg0, 0x20);
        arg0[8] = arg1;
        FUN_02059cd4(file);
        FUN_0205a504(&pair, arg0);
        if (!FUN_02059f44(file, pair)) {
            return 0;
        }
        arg0[9] = file[9];
        arg0[10] = file[10] - file[9];
        FUN_02059ffc(file);
        return 1;
    }
    {
        struct Hw_0205a624 *hw = (struct Hw_0205a624 *)0x027ffe50;
        return FUN_0205a52c(arg0, arg1, arg2, DAT_0211253c, hw->f0, hw->f4, hw->f8, hw->fc);
    }
}
