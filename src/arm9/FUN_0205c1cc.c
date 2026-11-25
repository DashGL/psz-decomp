// flags: -O4,p -noThumb
extern int FUN_0205c520(int a, int b);
extern long long FUN_0205c5dc(void);
extern int FUN_0205c600(void);

typedef struct {
    int _00, _01, _02, _03;
    int _10, _11, _12, _13;
    int _20, _21, _22, _23;
    int _30, _31, _32, _33;
} Mtx44;

void FUN_0205c1cc(int fovySin, int fovyCos, int aspect, int n, int f, int scaleW, Mtx44 *mtx) {
    int one_tan = FUN_0205c520(fovyCos, fovySin);
    long long t;

    *(volatile unsigned long long *)0x04000290 = (unsigned long long)0x1000 << 32;
    *(volatile unsigned long long *)0x04000298 = (unsigned int)(n - f);
    if (scaleW != 0x1000) {
        one_tan = (one_tan * scaleW) / 0x1000;
    }
    mtx->_01 = 0;
    mtx->_02 = 0;
    mtx->_03 = 0;
    mtx->_10 = 0;
    mtx->_11 = one_tan;
    mtx->_12 = 0;
    mtx->_13 = 0;
    mtx->_20 = 0;
    mtx->_21 = 0;
    mtx->_23 = -scaleW;
    mtx->_30 = 0;
    mtx->_31 = 0;
    mtx->_33 = 0;
    t = FUN_0205c5dc();
    *(unsigned long long *)0x04000290 = (unsigned long long)one_tan << 32;
    *(volatile unsigned long long *)0x04000298 = (unsigned int)aspect;
    if (scaleW != 0x1000) {
        t = (t * scaleW) / 0x1000;
    }
    mtx->_22 = (int)((t * (f + n) + 0x80000000LL) >> 32);
    mtx->_32 = (int)((t * (int)(((long long)(n << 1) * f + 0x800) >> 12) + 0x80000000LL) >> 32);
    mtx->_00 = FUN_0205c600();
}
