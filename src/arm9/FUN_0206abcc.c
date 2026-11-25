// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern int FUN_020688c0(int, unsigned int, int);
extern void FUN_020683e8(int);

struct TPData {
    unsigned short x, y, touch, validity;
};
struct State_0206abcc {
    int f0;
    void (*f4)(int, int, int);
    int f8;
    int fc;
    unsigned short f10;
    unsigned short f12;
    struct TPData * volatile f14;
    unsigned short f18;
    unsigned short f1a;
    unsigned char pad[0x1c];
    unsigned short f38;
    unsigned short f3a;
};
extern struct State_0206abcc DAT_0211a144;

static inline unsigned char send2(unsigned int a, unsigned int b) {
    if (FUN_020688c0(6, a, 0) < 0)
        return 0;
    if (FUN_020688c0(6, b, 0) < 0)
        return 0;
    return 1;
}

void FUN_0206abcc(int arg0, unsigned short arg1, struct TPData *arg2, unsigned int arg3) {
    unsigned int i;
    int irq;

    DAT_0211a144.f14 = arg2;
    DAT_0211a144.f10 = 0;
    DAT_0211a144.f12 = arg1;
    DAT_0211a144.f18 = arg3;
    for (i = 0; i < arg3; i++) {
        DAT_0211a144.f14[i].touch = 0;
    }
    irq = FUN_020683d4();
    if (!(send2((arg1 & 0xff) | 0x02000100U, arg0 | 0x01010000U) & 0xff)) {
        void (*cb)(int, int, int);
        FUN_020683e8(irq);
        DAT_0211a144.f38 |= 2;
        cb = DAT_0211a144.f4;
        if (cb != 0) {
            cb(1, 4, 0);
        }
    } else {
        DAT_0211a144.f3a |= 2;
        DAT_0211a144.f38 &= ~2;
        FUN_020683e8(irq);
    }
}
