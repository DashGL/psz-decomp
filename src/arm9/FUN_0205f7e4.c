// flags: -O4,p -noThumb
typedef struct {
    unsigned short a, b, c;
} Mode;
extern const Mode DAT_020f1950[];
extern unsigned int DAT_021125d4[];
extern unsigned int FUN_0205dd74(void);

void FUN_0205f7e4(void) {
    unsigned int mode = FUN_0205dd74();
    unsigned int a = DAT_020f1950[mode].a;
    unsigned int b = DAT_020f1950[mode].b;
    unsigned int c = DAT_020f1950[mode].c;
    DAT_021125d4[5] = mode;
    DAT_021125d4[1] = a << 12;
    DAT_021125d4[6] = b << 12;
    DAT_021125d4[7] = c << 12;
}
