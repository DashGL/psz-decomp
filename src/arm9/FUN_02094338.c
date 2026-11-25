// flags: -O4,s
typedef struct {
    unsigned char b[4];
    unsigned w[3];
} Record;
extern void FUN_020944ac(Record *, int, int);
extern void FUN_02094520(Record *, int, int);
extern void FUN_02084a1c(Record *, int);

void FUN_02094338(Record *out, unsigned char *p) {
    Record r;
    int i, n;
    r.b[0] = 255;
    r.b[1] = 255;
    r.b[2] = 255;
    r.b[3] = 255;
    for (i = 0; i < 3; ++i) {
        r.w[i] = 0;
    }
    switch (p[1]) {
    case 0:
        r.b[0] = 0;
        r.b[1] = p[2];
        r.b[2] = p[4];
        r.b[3] = p[3];
        FUN_020944ac(&r, 1, p[5]);
        FUN_020944ac(&r, 2, p[6]);
        FUN_020944ac(&r, 3, p[7]);
        FUN_020944ac(&r, 4, p[8]);
        FUN_020944ac(&r, 5, p[9]);
        n = p[10];
        r.w[1] = (r.w[1] & 0xfffc1fff) | (n << 13);
        if (n > 0) {
            r.w[1] = (r.w[1] & 0xfffff1ff) | 512;
        }
        r.w[0] = (r.w[0] & ~15) | (p[11] & 15);
        break;
    case 1:
        r.b[0] = 1;
        r.b[1] = p[2];
        r.b[2] = p[4];
        r.b[3] = p[3];
        FUN_02094520(&r, 1, p[5]);
        FUN_02094520(&r, 2, p[6]);
        FUN_02094520(&r, 3, p[7]);
        FUN_02094520(&r, 4, p[8]);
        FUN_02094520(&r, 5, p[9]);
        n = p[10];
        if (n > 4) {
            n = 4;
        }
        r.w[0] = (r.w[0] & 0xfe3fffff) | (n << 22);
        break;
    case 2:
        r.b[0] = 2;
        r.b[1] = p[2];
        r.b[2] = p[3];
        r.b[3] = 0;
        break;
    case 3:
        r.b[0] = 3;
        r.b[1] = p[2];
        r.b[2] = p[3];
        r.b[3] = 0;
        FUN_02084a1c(&r, (signed char)p[0]);
        break;
    case 4:
        r.b[0] = 3;
        r.b[1] = 1;
        r.b[2] = p[2];
        r.b[3] = 0;
        r.w[0] = (r.w[0] & 0xffc03fff) | (p[3] << 14);
        break;
    }
    *out = r;
}
