// flags: -O4,s
typedef struct {
    int f0;
    unsigned short *f4;
    unsigned short *f8;
    char *fc;
} S_9e238;
#pragma thumb off
extern void FUN_020014d4(void *, const void *, int);
#pragma thumb reset
int FUN_0209e238(S_9e238 *a, char *b, int c, unsigned int d, int e) {
    if (a->f4 != 0 && b != 0) {
        int idx = a->f4[d];
        int off0, len;
        idx += e;
        off0 = a->f8[idx];
        len = a->f8[idx + 1] - off0;
        if (len <= 0) {
            return 0;
        }
        if (len < c) {
            FUN_020014d4(b, a->fc + off0, len);
        } else {
            FUN_020014d4(b, a->fc + off0, c);
            b[c - 1] = 0;
        }
        return 1;
    }
    return 0;
}
