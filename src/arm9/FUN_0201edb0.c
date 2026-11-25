// flags: -O4,p -noThumb
typedef struct {
    unsigned char a, b, c, d;
} PivotIdx;

extern const PivotIdx DAT_020ec088[];

int FUN_0201edb0(int *out, const short *compact, const short *packed, unsigned int selector) {
    if (selector & 0x8000) {
        const short *p = compact + (selector & 0x7fff) * 3;
        int control, x, y, idx;
        out[8] = 0;
        out[7] = 0;
        out[6] = 0;
        out[5] = 0;
        out[4] = 0;
        out[3] = 0;
        out[2] = 0;
        out[1] = 0;
        out[0] = 0;
        control = p[0];
        x = p[1];
        y = p[2];
        idx = control & 0xf;
        out[idx] = (control & 0x10) ? -4096 : 4096;
        out[DAT_020ec088[idx].a] = x;
        out[DAT_020ec088[idx].b] = y;
        out[DAT_020ec088[idx].c] = (p[0] & 0x20) ? -y : y;
        out[DAT_020ec088[idx].d] = (p[0] & 0x40) ? -x : x;
        return 0;
    } else {
        const short *p = packed + (selector & 0x7fff) * 5;
        short v;
        int t;
        t = p[4];
        out[4] = t >> 3;
        v = (short)(t & 7);
        t = p[0];
        out[0] = t >> 3;
        v = (short)((v << 3) | (t & 7));
        t = p[1];
        out[1] = t >> 3;
        v = (short)((v << 3) | (t & 7));
        t = p[2];
        out[2] = t >> 3;
        v = (short)((v << 3) | (t & 7));
        t = p[3];
        v = (short)((v << 3) | (t & 7));
        out[3] = t >> 3;
        out[5] = ((int)v << 19) >> 19;
        return 1;
    }
}
