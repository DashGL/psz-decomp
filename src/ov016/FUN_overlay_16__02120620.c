// flags: -O4,s
typedef unsigned int U;
typedef unsigned long long Q;

#pragma thumb off
extern U FUN_02067650(int), FUN_0206763c(int), FUN_overlay_16__0211fcdc(void), FUN_overlay_16__0211fce8(void);
extern void FUN_overlay_16__0211fcf0(U, U), FUN_overlay_16__0211fd10(U, U), FUN_02059cd4(void *);
extern int FUN_02059fb4(void *, const void *);
extern void *FUN_overlay_16__0211e670(void *, U);
extern void FUN_02068450(void), FUN_02001540(void *, int, U), FUN_02067374(void), FUN_02067fd8(void *);
extern U FUN_overlay_16__0211e7c0(void *), FUN_overlay_16__0211e7d8(void *), FUN_overlay_16__0211e778(void *), FUN_overlay_16__0211e7a8(void *), FUN_overlay_16__0211e790(void *);
extern Q FUN_02067e0c(void);
extern void FUN_02068180(void *, Q, Q, void (*)(void), void *);
#pragma thumb on
extern void *FUN_020ba8bc(U, int);
extern void FUN_overlay_16__021202c0(void);

int FUN_overlay_16__02120620(unsigned char *self, const void *file) {
    U a, b, start, rate, frames, size, period;
    Q now;

    *(U *)(self + 0x00) = 0;
    *(U *)(self + 0x04) = 0;
    *(U *)(self + 0x08) = 0;
    *(U *)(self + 0x0c) = 0;
    *(U *)(self + 0x10) = 0;
    *(U *)(self + 0x14) = 0;
    *(U *)(self + 0x18) = 0;
    *(U *)(self + 0x448) = 0;
    *(U *)(self + 0x494) = 0;
    *(U *)(self + 0x498) = 0;
    *(U *)(self + 0x49c) = 0;
    *(U *)(self + 0x4a0) = 0;
    *(U *)(self + 0x4a4) = 0;
    *(U *)(self + 0x4a8) = 0;
    *(U *)(self + 0x4ac) = 0;
    *(U *)(self + 0x4b0) = 0;
    *(U *)(self + 0x4b4) = 0;
    *(U *)(self + 0x4b8) = 0;
    *(U *)(self + 0x4bc) = 0;
    *(U *)(self + 0x4c0) = 0;
    *(U *)(self + 0x4c4) = 0;
    *(U *)(self + 0x4b4) = 6;

    start = FUN_02067650(3);
    a = FUN_0206763c(3) - start;
    if (a >= FUN_overlay_16__0211fcdc()) {
        a = FUN_overlay_16__0211fcdc();
    }
    start = FUN_02067650(4);
    b = FUN_0206763c(4) - start;
    if (b >= FUN_overlay_16__0211fce8()) {
        b = FUN_overlay_16__0211fce8();
    }
    FUN_overlay_16__0211fcf0(FUN_02067650(3), a);
    FUN_overlay_16__0211fd10(FUN_02067650(4), b);
    FUN_02059cd4(self + 0x44c);

    if (file != 0) {
        if (!FUN_02059fb4(self + 0x44c, file)) {
            return 0;
        }
        *(void **)(self + 0x448) = FUN_overlay_16__0211e670(self + 0x44c, *(U *)(self + 0x4b4));
        if (!*(void **)(self + 0x448)) {
            return 0;
        }
        FUN_02068450();
    }

    *(U *)(self + 0x4ac) = FUN_overlay_16__0211e7c0(*(void **)(self + 0x448));
    *(U *)(self + 0x4a0) = FUN_overlay_16__0211e7d8(*(void **)(self + 0x448));
    rate = FUN_overlay_16__0211e778(*(void **)(self + 0x448));
    frames = FUN_overlay_16__0211e7a8(*(void **)(self + 0x448));
    *(U *)(self + 0x4a4) = (U)(((Q)rate << 24) / ((Q)*(U *)(self + 0x4a0) * frames)) + 1;
    *(U *)(self + 0x0c) = *(U *)(self + 0x4a4) * (*(U *)(self + 0x4b4) + 1);
    size = (((*(U *)(self + 0x0c) * *(U *)(self + 0x4a0) << 1) - 1) >> 2) + 1;
    size <<= 2;
    *(U *)(self + 0x494) = FUN_overlay_16__0211e790(*(void **)(self + 0x448));

    switch (*(U *)(self + 0x494)) {
    case 2:
        *(void **)(self + 0x14) = FUN_020ba8bc(size, 16);
        *(void **)(self + 0x18) = FUN_020ba8bc(size, 16);
        FUN_02001540(*(void **)(self + 0x14), 0, size);
        FUN_02001540(*(void **)(self + 0x18), 0, size);
        break;
    case 1:
        *(void **)(self + 0x10) = FUN_020ba8bc(size, 16);
        FUN_02001540(*(void **)(self + 0x10), 0, size);
        break;
    }

    FUN_02067374();
    *(U *)(self + 0x4c0) = 0;
    *(U *)(self + 0x4c4) = 0;
    *(U *)(self + 0x08) = 0;
    *(U *)(self + 0x00) = 0;
    *(U *)(self + 0x04) = 0;
    FUN_02067fd8(self + 28);
    now = FUN_02067e0c();
    frames = FUN_overlay_16__0211e7a8(*(void **)(self + 0x448));
    period = (U)(((0xf4240000000ULL / frames * 0x82eaULL) >> 6) / 1000);
    FUN_02068180(self + 28, now + 5, (Q)period, FUN_overlay_16__021202c0, 0);
    return 1;
}
