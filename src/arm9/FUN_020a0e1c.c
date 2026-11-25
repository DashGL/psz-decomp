// flags: -O4,s
typedef struct { signed char flag; signed char delta; } Entry;
extern Entry DAT_020f4c20[];
extern char *FUN_02086e3c(void);
extern char *FUN_0208724c(void *);
extern int FUN_020a1580(int, void *);
extern void FUN_020b04d0(void *, int);
void FUN_020a0e1c(void) {
    char *p;
    char *bits;
    int old;
    int count;
    int i;
    char *s;
    p = FUN_02086e3c() + 0x10;
    s = FUN_02086e3c();
    old = *(short *)(p + 8);
    count = 0x28;
    bits = FUN_0208724c(FUN_02086e3c()) + 0x644;
    bits += 0x17;
    for (i = 0; i < 5; i++) {
        if (FUN_020a1580(DAT_020f4c20[i].flag, bits)) {
            count += DAT_020f4c20[i].delta;
        }
    }
    if (old < count) {
        FUN_020b04d0(p, count - old);
    }
    if (*(short *)(s + 0xc) < count) {
        short v = (short)count;
        if (v >= 0 && v <= *(short *)(s + 0xe)) {
            *(short *)(s + 0xc) = v;
        }
    }
}
