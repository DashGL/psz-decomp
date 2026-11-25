// flags: -O4,p -noThumb
typedef struct {
    int f00; int f04; int f08; int f0c; int f10; int f14;
    int f18; int f1c; int f20; int f24; int f28;
    unsigned short f2c; unsigned short f2e;
    int f30; int f34;
} S1fd18;

void FUN_0201fd18(S1fd18 *out, S1fd18 *in) {
    out->f00 = in->f18;
    out->f14 = in->f1c;
    out->f04 = 0;
    {
        unsigned short w = in->f2c;
        int x = in->f24;
        unsigned short h = in->f2e;
        int t1 = (-(int)w << 11) - x * w;
        int y = in->f28;
        int t2 = y * h + (-(int)h << 11);
        out->f30 = (int)(((long long)in->f18 * t1) >> 8) + (w << 15);
        out->f34 = (int)(((long long)in->f1c * t2) >> 8) + (in->f2e << 15);
    }
    out->f10 = 0;
}
