// flags: -O4,s
typedef struct {
    unsigned short v[8];
} Masks;

extern Masks DAT_020f5798;
extern void FUN_0200c938(void *, int);
extern unsigned int FUN_020832b4(int);

int FUN_020b2a54(int *s, int mode) {
    int result = -1;
    Masks masks = DAT_020f5798;
    unsigned int weights[8];
    unsigned int r;
    unsigned int sum;
    int i, j;
    FUN_0200c938(weights, 32);
    for (i = 0; i < 8; i++) {
        if (masks.v[i] & (1 << mode)) {
            signed char *p = (signed char *)s[4];
            int key;
            unsigned int w;
            if (i >= 0 && i < 8) {
                key = p[14 + i];
            } else {
                key = -1;
            }
            if (key < 0) {
                w = 0;
            } else if (key >= 5) {
                w = 0;
            } else {
                w = *(unsigned short *)(p + 22 + 2 * key);
            }
            weights[i] = w;
        } else {
            weights[i] = 0;
        }
    }
    r = FUN_020832b4(10000);
    sum = 0;
    for (j = 0; j < 8; j++) {
        sum += weights[j];
        if (r < sum) {
            result = j;
            break;
        }
    }
    return result;
}
