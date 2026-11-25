// flags: -O4,s
typedef struct { unsigned w[6]; } Cfg;
typedef struct {
    unsigned w0[3];
    unsigned w3;
    unsigned pad[7];
    unsigned w11;
    void *w12;
    unsigned short w13_lo;
    unsigned short w13_hi;
    unsigned w14;
    int w15;
} State13;
extern int DAT_0211a51c;
extern const Cfg DAT_overlay_13__0211fa18;
extern char *DAT_02108c84;
extern int DAT_0211a9c4;
extern int DAT_overlay_13__0211fb00;
extern State13 DAT_overlay_13__0211fac0;
extern signed char DAT_0211a210[];
extern void FUN_overlay_13__0211efd4(unsigned);
extern void FUN_02084bc4(void *);
extern void FUN_020841d0(void *, int);
extern void FUN_020afe0c(void *, void *, unsigned);
extern void FUN_020876c8(void);
extern void FUN_0204f298(void);
extern void FUN_02090ba8(void);
extern void FUN_020c1aac(int, int);
extern void FUN_020c18d8(int, int);
extern void FUN_020c1a78(int, int);
extern void FUN_020907d4(void);
extern void FUN_02093b50(void);
extern void FUN_overlay_13__0211effc(void *);
extern void FUN_020a43fc(void);
extern void FUN_020c2d94(int, int, int);
extern void *FUN_02033b9c(void *);
extern void *FUN_0203e6d8(unsigned);
extern void *FUN_overlay_13__0211eb40(unsigned, void *);
extern int FUN_02072fec(unsigned);
void FUN_overlay_13__0211f1ac(void) {
    Cfg config;
    char *manager, *child;
    *(volatile unsigned short *)0x04000008 &= ~3U;
    *(volatile unsigned short *)0x0400000a = (*(volatile unsigned short *)0x0400000a & ~3U) | 1;
    FUN_overlay_13__0211efd4(1);
    FUN_overlay_13__0211efd4(2);
    FUN_overlay_13__0211efd4(4);
    FUN_overlay_13__0211efd4(8);
    FUN_02084bc4(&DAT_0211a51c);
    config = DAT_overlay_13__0211fa18;
    FUN_02033b9c(&config);
    manager = DAT_02108c84;
    if (manager) {
        child = *(char **)(manager + 64 + 4 * (*(unsigned *)(manager + 100)));
        if (child) FUN_020841d0(child, 3);
    }
    FUN_0203e6d8(0);
    FUN_020afe0c(&DAT_0211a9c4, &DAT_overlay_13__0211fb00, 0x32000);
    FUN_020876c8();
    FUN_0204f298();
    FUN_02090ba8();
    FUN_020c1aac(23, 5);
    FUN_020c18d8(23, 5);
    FUN_020c1a78(1, -1);
    FUN_020907d4();
    FUN_02093b50();
    FUN_overlay_13__0211effc(&DAT_overlay_13__0211fac0.w3);
    DAT_overlay_13__0211fac0.w11 = 0;
    DAT_overlay_13__0211fac0.w15 = 0;
    FUN_020a43fc();
    if (!DAT_overlay_13__0211fac0.w12) {
        DAT_overlay_13__0211fac0.w12 = FUN_overlay_13__0211eb40(DAT_overlay_13__0211fac0.w11, 0);
    }
    DAT_overlay_13__0211fac0.w13_lo = 2;
    FUN_020c2d94(DAT_overlay_13__0211fac0.w15, 1, 2);
    switch (DAT_0211a210[4]) {
    case 0:
        FUN_02072fec(2);
        DAT_overlay_13__0211fac0.w3 = 0;
        break;
    case 1:
    case 2:
    case 3:
        break;
    }
}
