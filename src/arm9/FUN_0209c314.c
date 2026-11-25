// flags: -O4,s
typedef struct {
    unsigned char low : 4;
    unsigned char high : 4;
} RangeByte;

extern unsigned char DAT_0211a500;
extern unsigned char DAT_0211a501;
extern signed char DAT_0211a3c4[];
extern unsigned char DAT_0211a502;
extern RangeByte DAT_020f4724[2][20];
extern signed char DAT_020fb4b4[];
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern int FUN_0209beac(int);

static inline unsigned char get_level(void) {
    char *p = FUN_020870c4(FUN_02086e3c()) + 0x2c;
    return *(unsigned char *)(p + 0x2a);
}

void FUN_0209c314(unsigned int *s) {
    int region;
    int mode;
    int idx;
    s[1] = (s[1] & 0xffc03fff) | (1 << 14);
    if (DAT_0211a500) {
        region = DAT_0211a501;
    } else {
        region = DAT_0211a3c4[13];
    }
    mode = (DAT_0211a500 && DAT_0211a502 == 8) ? 1 : 0;
    idx = (get_level() - 1) / 5;
    if ((unsigned int)idx < 20) {
        RangeByte *rb = &DAT_020f4724[mode][idx];
        int low = rb->low;
        int high = rb->high;
        int val = low + FUN_0209beac(high - low + 1);
        int cap = DAT_020fb4b4[region];
        if (val >= cap) {
            val = cap;
        }
        s[1] = (s[1] & 0xffc03fff) | ((unsigned int)val << 14);
    }
}
