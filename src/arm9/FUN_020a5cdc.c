// flags: -O4,s
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 pad0[0xf8];
    u8 mask[48 * 128];
    u8 pad1[0x1908 - 0xf8 - 48 * 128];
    int flag;
    u32 pad2;
    u32 *buf;
} S_020a5cdc;

extern int FUN_020205dc(int, int, void *, int);

void FUN_020a5cdc(S_020a5cdc *s) {
    int y, x, line;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 16; x++) {
            u32 *dest = s->buf + (x & 7) * 8 + (x / 8) * 0x200 + y * 0x40;
            for (line = 0; line < 8; line++) {
                u32 word;
                u8 *src = &s->mask[(line + y * 8) * 128 + x * 8];
                word = 0;
                if (src[0] != 0) word |= 1;
                if (src[1] != 0) word |= 0x10;
                if (src[2] != 0) word |= 0x100;
                if (src[3] != 0) word |= 0x1000;
                if (src[4] != 0) word |= 0x10000;
                if (src[5] != 0) word |= 0x100000;
                if (src[6] != 0) word |= 0x1000000;
                if (src[7] != 0) word |= 0x10000000;
                dest[line] = word;
            }
        }
    }
    FUN_020205dc(0x23, 0x1f000, s->buf, 0x1000);
    s->flag = 1;
}
