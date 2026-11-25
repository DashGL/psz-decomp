// flags: -O4,s
extern int DAT_020f7088[];
extern int DAT_020f70a4[];
extern unsigned int DAT_020f7024;
extern void *DAT_02108c84;
extern void *DAT_02108d08;
extern void FUN_020b9cb0(void *, void *);
extern void FUN_02038a0c(void *, void *, unsigned int);
extern void FUN_02038a84(void *);
extern void FUN_020381f4(void *, void *);
extern char *FUN_0203e910(void *, unsigned int);
extern void FUN_020380d4(void *);
extern void FUN_0203eb5c(void *, void *, unsigned int, unsigned int);
extern void FUN_0203ec54(void *, void *, unsigned int, unsigned int);
extern unsigned int FUN_0203eb3c(void *, int);
extern void FUN_02038700(void *, unsigned int, int);
#define W(n) (*(unsigned int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
#define B(n) (*(unsigned char *)(s + (n)))
#define P(n) (*(char **)(s + (n)))

char *FUN_020387bc(char *s, void *source, unsigned int arg, int slot, int first, int second, int mode) {
    void *manager, *world;
    FUN_020b9cb0(s, DAT_02108d08);
    FUN_02038a0c(s + 32, source, arg);
    W(0) = (unsigned int)DAT_020f7088;
    W(32) = (unsigned int)DAT_020f70a4;
    W(140) = 0;
    W(144) = 0;
    H(148) = 65535;
    H(150) = 65535;
    B(152) = 255;
    H(192) = 0;
    H(194) = 0;
    W(196) = first;
    W(200) = second;
    W(208) = 0;
    W(212) = 4096;
    W(216) = 4096;
    W(220) = 4096;
    W(224) = 0;
    W(228) = 0;
    W(232) = 0;
    H(236) = 65535;
    W(12) = DAT_020f7024;
    manager = DAT_02108c84;
    world = DAT_02108d08;
    FUN_02038a84(s + 36);
    W(140) = 0;
    W(156) = 0;
    W(168) = W(156);
    W(180) = W(168);
    W(160) = 0;
    W(172) = W(160);
    W(184) = W(172);
    W(164) = 0;
    W(176) = W(164);
    W(188) = W(176);
    if (slot >= 0 && slot < 4) B(152) = slot;
    if ((int)W(196) < 0 || (int)W(196) >= 18) W(196) = 0;
    if ((int)W(200) < 0 || (int)W(200) >= 3) W(200) = 0;
    W(204) = W(196) + 18 * W(200);
    FUN_020381f4(s + 36, source);
    if (world && manager && world) {
        P(144) = FUN_0203e910(world, B(152));
        if (P(144)) {
            H(148) = *(unsigned short *)P(144);
            H(150) = *(unsigned short *)(P(144) + 2);
            FUN_020380d4(s);
        }
        switch (mode) {
        case 0:
            FUN_0203eb5c(world, s + 36, B(152), W(204));
            W(232) = 2;
            break;
        case 1:
            FUN_0203ec54(world, s + 36, B(152), W(204));
            W(232) = 2;
        default:
            W(232) = 4;
            W(204) = ~0u;
            break;
        }
        H(236) = FUN_0203eb3c(world, *(signed char *)(s + 69));
        if (W(232) == 2) FUN_02038700(s, W(212), 4);
    }
    return s;
}
