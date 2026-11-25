// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char *buf;
    unsigned int len;
    int zero;
} Frame_03884;
extern void FUN_02003728(void);
extern unsigned int FUN_02002ed8(void *, Frame_03884 *, int, int);
unsigned int FUN_02003884(char *a, unsigned int b, int c, int d) {
    Frame_03884 sp0;
    sp0.buf = a;
    sp0.len = b;
    sp0.zero = 0;
    unsigned int r0 = FUN_02002ed8((void *)FUN_02003728, &sp0, c, d);
    if (a == 0) {
        return r0;
    }
    if (r0 < b) {
        a[r0] = 0;
        return r0;
    }
    if (b != 0) {
        (a + b)[-1] = 0;
    }
    return r0;
}
