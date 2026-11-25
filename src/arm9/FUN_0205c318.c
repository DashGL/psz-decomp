// flags: -O4,p -noThumb
extern void FUN_0205c638(int);
extern long long FUN_0205c5dc(void);

typedef struct {
    int _00, _01, _02, _03;
    int _10, _11, _12, _13;
    int _20, _21, _22, _23;
    int _30, _31, _32, _33;
} Mtx44;

void FUN_0205c318(int t, int b, int l, int r, int n, int f, int scaleW, Mtx44 *mtx) {
    long long tmp1, tmp2, tmp3;

    FUN_0205c638(r - l);
    mtx->_01 = 0;
    mtx->_02 = 0;
    mtx->_03 = 0;
    mtx->_10 = 0;
    mtx->_12 = 0;
    mtx->_13 = 0;
    mtx->_20 = 0;
    mtx->_21 = 0;
    mtx->_23 = 0;
    mtx->_33 = scaleW;

    tmp1 = FUN_0205c5dc();
    *(volatile unsigned long long *)0x04000290 = (unsigned long long)0x1000 << 32;
    *(volatile unsigned long long *)0x04000298 = (unsigned int)(t - b);
    if (scaleW != 0x1000) {
        tmp1 = (tmp1 * scaleW) / 0x1000;
    }
    mtx->_00 = (int)(((tmp1 << 13) + 0x80000000LL) >> 32);

    tmp2 = FUN_0205c5dc();
    *(volatile unsigned long long *)0x04000290 = (unsigned long long)0x1000 << 32;
    *(volatile unsigned long long *)0x04000298 = (unsigned int)(n - f);
    if (scaleW != 0x1000) {
        tmp2 = (tmp2 * scaleW) / 0x1000;
    }
    mtx->_11 = (int)(((tmp2 << 13) + 0x80000000LL) >> 32);

    tmp3 = FUN_0205c5dc();
    if (scaleW != 0x1000) {
        tmp3 = (tmp3 * scaleW) / 0x1000;
    }
    mtx->_22 = (int)(((tmp3 << 13) + 0x80000000LL) >> 32);
    mtx->_30 = (int)((tmp1 * -(r + l) + 0x80000000LL) >> 32);
    mtx->_31 = (int)((tmp2 * -(t + b) + 0x80000000LL) >> 32);
    mtx->_32 = (int)((tmp3 * (f + n) + 0x80000000LL) >> 32);
}
