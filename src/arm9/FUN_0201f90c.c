// flags: -O4,p -noThumb
extern unsigned short *FUN_0201d43c(unsigned char *, unsigned int);

typedef struct {
    unsigned char pad0[0x2c];
    unsigned int y_lo : 16;
    unsigned int pad_bits : 16;
    unsigned char pad1[4];
    unsigned short off;
} S_0201f90c;

unsigned int FUN_0201f90c(S_0201f90c *self, unsigned int key, unsigned int *out) {
    unsigned short *p;
    unsigned short x, y;
    unsigned short flag;
    if (self && self->off) {
        p = FUN_0201d43c((unsigned char *)self + self->off, key);
    } else {
        p = 0;
    }
    y = (unsigned short)(*(unsigned int *)((char *)self + 0x2c) & 0xffff);
    y = (unsigned short)((unsigned int)y & ~0xe0000000u);
    flag = p[1];
    x = p[0];
    if (!(flag & 1)) {
        x = (unsigned short)(x >> 1);
        y = (unsigned short)(y >> 1);
    }
    out[5] = x + y;
    return x + y;
}
