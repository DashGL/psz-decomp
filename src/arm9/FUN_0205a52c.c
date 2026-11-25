// flags: -O4,p -noThumb
struct Pair_0205a52c { int a; int b; };
extern void FUN_02059cd4(void *);
extern int FUN_02059efc(void *, int, int, int, int);
extern int FUN_0205a150(void *, void *, int);
extern void FUN_02059ffc(void *);
extern void FUN_0205a504(void *, void *);
extern int FUN_02059f44(void *, struct Pair_0205a52c);

int FUN_0205a52c(int *arg0, int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, int arg6, unsigned int arg7) {
    int file[18];
    struct Pair_0205a52c pair;
    unsigned int off;
    int base;
    unsigned int sz;
    if (arg1 == 0) {
        base = arg4;
        sz = arg5;
    } else {
        base = arg6;
        sz = arg7;
    }
    off = arg2 * 0x20;
    if (off >= sz) {
        return 0;
    }
    FUN_02059cd4(file);
    if (!FUN_02059efc(file, arg3, base + off, base + sz, -1)) {
        return 0;
    }
    if (FUN_0205a150(file, arg0, 0x20) != 0x20) {
        FUN_02059ffc(file);
        return 0;
    }
    FUN_02059ffc(file);
    arg0[8] = arg1;
    FUN_0205a504(&pair, arg0);
    if (!FUN_02059f44(file, pair)) {
        return 0;
    }
    arg0[9] = file[9];
    arg0[10] = file[10] - file[9];
    FUN_02059ffc(file);
    return 1;
}
