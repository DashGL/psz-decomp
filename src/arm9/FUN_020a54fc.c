// flags: -O4,s
typedef unsigned int U;
#define W(o) (*(U *)(s+(o)))
#define H(o) (*(unsigned short *)(s+(o)))
typedef struct { int w[5]; } Row20;
extern char UNK_020fc054[], UNK_020fc070[], UNK_0211a984[], UNK_020fc14c[], UNK_020fc164[], UNK_020fc0e8[], UNK_020fc17c[], UNK_020fc194[], UNK_020fc1ac[], UNK_020fc1c4[], UNK_020f4d94[], UNK_020f4da8[], UNK_020fc084[], UNK_0211c90c[], UNK_020fc048[];
extern Row20 UNK_020f4d6c[];
extern void FUN_020a49e4(void *, void *), FUN_020a7580(void *), FUN_020963b0(void *), FUN_02071d0c(void *);
extern void FUN_020c2ad4(void *, void *, U, U, U), FUN_020a57a0(void *, void *);
extern void *FUN_020c1fc8(void), *FUN_020ba8a0(U), *FUN_020a52d4(void *);
extern int FUN_020c2438(void *, void *, void *, U);
extern void FUN_0206557c(U, void *, U), FUN_020a4c3c(void *, void *, int), FUN_02080d34(void *, void *), FUN_020a52dc(void *), FUN_0208bcf0(void), FUN_020a75d0(void *), FUN_020a53b8(void *, U);
extern unsigned short FUN_02013024(void *, int *);
extern void FUN_020a5424(void *, U, U, U, U, U, U, U, U, U, U, U), FUN_020a5398(void *, U), FUN_020a5fb4(void *, int), FUN_02080d10(void *), FUN_020a5cdc(void *);

void *FUN_020a54fc(char *s, U mode, void *parent) {
    int i, matrix[4];
    unsigned char *p;
    FUN_020a49e4(s, parent);
    W(0) = (U)UNK_020fc054;
    W(32) = (U)UNK_020fc070;
    FUN_020a7580(s + 244);
    H(0x1900) = 8;
    H(0x1902) = 37;
    W(0x1904) = 0;
    W(0x1908) = 0;
    W(0x1910) = 0;
    FUN_020963b0(s + 0x1914);
    W(0x1c18) = mode;
    FUN_02071d0c(s + 0x1c1c);
    W(0x1c2c) = 0;
    s[0x1c30] = 0;
    *(void **)(UNK_0211a984 + 4) = s;
    FUN_020c2ad4(s + 32, W(0x1c18) != 2 ? UNK_020fc14c : UNK_020fc164, 7, 3, 5);
    FUN_020a57a0(UNK_020fc0e8, &UNK_020f4d6c[W(0x1c18) == 2 ? 1 : 0]);
    if (W(0x1c18) == 2) W(56) = FUN_020c2438(FUN_020c1fc8(), UNK_020fc17c, UNK_020fc194, 2);
    else W(56) = FUN_020c2438(FUN_020c1fc8(), UNK_020fc1ac, UNK_020fc1c4, 2);
    W(0x1910) = (U)FUN_020ba8a0(4096);
    FUN_0206557c(0, (void *)W(0x1910), 4096);
    switch (W(0x1c18)) {
    case 1:
    case 3:
        FUN_020a4c3c(s, UNK_020f4d94, 10);
        p = FUN_020a52d4(s);
        if (p) {
            FUN_02080d34(p, s + 248);
            UNK_0211a984[0] = p[768];
            FUN_020a52dc(s);
        }
        H(0x1c1c) = 10;
        { U *q = (U *)UNK_020f4da8; W(0x1c24) = q[1]; W(0x1c28) = q[2]; }
        FUN_0208bcf0();
        W(0x1c2c) = 1;
        break;
    case 0:
        FUN_020a4c3c(s, UNK_020fc084, 10);
        p = *(unsigned char **)(UNK_0211a984 + 8);
        if (p) {
            FUN_02080d34(p, s + 248);
            UNK_0211a984[0] = (*(unsigned char **)(UNK_0211a984 + 8))[768];
        }
        FUN_0208bcf0();
        W(0x1c2c) = 1;
        break;
    case 2:
        FUN_020a4c3c(s, UNK_020fc084, 10);
        FUN_020a75d0(s + 244);
        FUN_020a53b8(s, 0);
        FUN_020a53b8(s, 9);
        break;
    }
    matrix[0] = 2048;
    matrix[1] = 0;
    matrix[2] = 0;
    matrix[3] = 2048;
    H(64) = FUN_02013024(UNK_0211c90c, matrix);
    for (i = 0; i < 2; i++) {
        FUN_020a5424(s + 108 + 8 * i, i * 128, 37, 0, 0, 0, 768, 0xc0000000, 0, (126976 + (i * 4096) / 2) / 128, 0, 0);
    }
    W(204) = 2;
    switch ((unsigned char)UNK_020fc048[0]) {
    case 1:
        FUN_020a5398(s, 3);
        break;
    case 2:
        FUN_020a5398(s, 4);
        break;
    default:
        FUN_020a5398(s, 2);
        break;
    }
    FUN_020a5fb4(s, (unsigned char)UNK_0211a984[0]);
    FUN_02080d10(s + 0x1914);
    FUN_020a5cdc(s);
    *(U *)(UNK_0211a984 + 12) = 0;
    return s;
}
