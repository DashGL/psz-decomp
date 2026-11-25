// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    signed char a[2];
    signed char b[2];
    signed char idx;
} Settings_20;
#pragma thumb off
extern unsigned FUN_02009c84(int);
extern unsigned FUN_0200923c(unsigned, unsigned);
extern unsigned FUN_02009f00(unsigned, unsigned);
extern int FUN_02009c50(unsigned);
extern int FUN_0205c520(int, int);
#pragma thumb on
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_02036c34(void *);

void FUN_overlay_20__0219ced4(int *self) {
    int *owner = (int *)self[1];
    Settings_20 *settings = (Settings_20 *)((char *)self[2] + 0x30);
    int index, value, other, delta;
    unsigned bits;
    owner[59] &= ~2;
    FUN_02040c0c(owner, 0, 10, 4096, 10);
    index = settings->idx;
    if (index < 0 || index >= 2) settings->idx = 0;
    index = settings->idx;
    value = settings->a[index];
    other = settings->b[index];
    settings->idx = index + 1;
    self[7] = value > 0;
    if (value > 0) bits = FUN_0200923c(0x3f000000, FUN_02009c84((unsigned)value << 12));
    else bits = FUN_02009f00(FUN_02009c84((unsigned)value << 12), 0x3f000000);
    delta = FUN_02036c34(owner);
    self[4] = FUN_0205c520(FUN_02009c50(bits), delta) >> 12;
    self[5] = other;
    self[6] = 0;
    self[8] = 0;
    self[3] = 0;
    self[9] = settings->f4;
}
