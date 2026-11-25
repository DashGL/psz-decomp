// flags: -O4,s
// near: nd=4 badrel=0 len=0xe8/0xe8 (register coloring / scheduling)
extern void *FUN_020ba8bc(int, int);
extern void FUN_02052b64(void *, int);
extern short FUN_02053b6c(void);
extern volatile struct {
    short s0;
    short s2;
    short s4;
    short s6;
    short s8;
    short sa;
    void *p0c;
    int f10;
    void *p14;
    int f18;
    void *p1c;
    void *p20;
    void *p24;
    int f28;
    int f2c;
    volatile int f30;
    volatile int f34;
    int f38;
    int f3c;
    int f40;
    void *p44;
    volatile int f48;
    int f4c;
    int f50;
    void *p54;
    void *p58;
    volatile int f5c;
} DAT_0211b2c0;
extern volatile struct {
    volatile int f0;
    volatile void *f4;
} DAT_020fc950;

void FUN_020bb158(void *a0, int a1, int a2, short a3) {
    int v0, v1;
    DAT_0211b2c0.f50 = 0;
    DAT_0211b2c0.s4 = 0;
    DAT_0211b2c0.sa = a3;
    DAT_0211b2c0.f40 = a1;
    DAT_0211b2c0.f3c = 0;
    DAT_0211b2c0.f38 = a2;
    DAT_020fc950.f4 = a0;
    DAT_0211b2c0.f34 = 0;
    DAT_0211b2c0.f30 = 0;
    DAT_0211b2c0.f48 = 0;
    DAT_0211b2c0.f5c = 0;
    DAT_020fc950.f0 = -1;
    DAT_0211b2c0.p54 = FUN_020ba8bc(0xf00, 0x20);
    DAT_0211b2c0.p24 = FUN_020ba8bc(0x40, 0x20);
    DAT_0211b2c0.p20 = FUN_020ba8bc(0x44, 0x20);
    DAT_0211b2c0.p1c = FUN_020ba8bc(0x400, 0x20);
    if (DAT_0211b2c0.f40 != 0) {
        DAT_0211b2c0.p58 = FUN_020ba8bc(0x820, 0x20);
        DAT_0211b2c0.p0c = FUN_020ba8bc(0x200, 0x20);
    }
    DAT_0211b2c0.f10 = 0;
    v0 = (*(unsigned short *)((char *)a0 + 0x34) + 0x23) & ~0x1f;
    v1 = (*(unsigned short *)((char *)a0 + 0x36) + 0x21) & ~0x1f;
    if (v0 <= v1) {
        v0 = v1;
    }
    DAT_0211b2c0.f18 = v0;
    DAT_0211b2c0.p14 = FUN_020ba8bc(v0, 0x20);
    v0 = (((*(unsigned short *)((char *)a0 + 0x36) + 0xe) * *(unsigned short *)((char *)a0 + 0x10) + 0x29) & ~0x1f) << 1;
    v1 = ((*(unsigned short *)((char *)a0 + 0x34) + 0x55) & ~0x1f) << 1;
    if (v0 <= v1) {
        v0 = v1;
    }
    DAT_0211b2c0.f28 = v0;
    DAT_0211b2c0.p44 = FUN_020ba8bc(v0, 0x20);
    FUN_02052b64(DAT_0211b2c0.p54, 2);
    DAT_0211b2c0.s6 = FUN_02053b6c();
}
