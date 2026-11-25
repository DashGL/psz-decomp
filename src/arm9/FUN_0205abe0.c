// flags: -O4,p -noThumb
typedef struct {
    int _00, _01, _02;
    int _10, _11, _12;
    int _20, _21, _22;
} MtxFx33;

extern void FUN_0205c638(int);
extern int FUN_0205c600(void);
extern void FUN_0206564c(const MtxFx33 *, MtxFx33 *);

int FUN_0205abe0(const MtxFx33 *pSrc, MtxFx33 *pDst)
{
    MtxFx33 tmp;
    MtxFx33 *p;
    int det;
    int det00, det10, det20;
    int tmp01, tmp02, tmp11, tmp12;
    int mul;

    if (pSrc == pDst) {
        p = &tmp;
    } else {
        p = pDst;
    }

    det00 = (int)(((long long)pSrc->_11 * pSrc->_22 - (long long)pSrc->_12 * pSrc->_21 + 2048) >> 12);
    det10 = (int)(((long long)pSrc->_10 * pSrc->_22 - (long long)pSrc->_12 * pSrc->_20 + 2048) >> 12);
    det20 = (int)(((long long)pSrc->_10 * pSrc->_21 - (long long)pSrc->_11 * pSrc->_20 + 2048) >> 12);

    det = (int)(((long long)pSrc->_00 * det00 - (long long)pSrc->_01 * det10 + (long long)pSrc->_02 * det20 + 2048) >> 12);
    if (det == 0) {
        return -1;
    }

    FUN_0205c638(det);

    tmp01 = (int)(((long long)pSrc->_01 * pSrc->_22 - (long long)pSrc->_21 * pSrc->_02) >> 12);
    tmp02 = (int)(((long long)pSrc->_01 * pSrc->_12 - (long long)pSrc->_11 * pSrc->_02) >> 12);
    tmp11 = (int)(((long long)pSrc->_00 * pSrc->_22 - (long long)pSrc->_20 * pSrc->_02) >> 12);
    tmp12 = (int)(((long long)pSrc->_00 * pSrc->_12 - (long long)pSrc->_10 * pSrc->_02) >> 12);

    mul = FUN_0205c600();

    p->_00 = (int)(((long long)mul * det00) >> 12);
    p->_01 = -(int)(((long long)mul * tmp01) >> 12);
    p->_02 = (int)(((long long)mul * tmp02) >> 12);
    p->_10 = -(int)(((long long)mul * det10) >> 12);
    p->_11 = (int)(((long long)mul * tmp11) >> 12);
    p->_12 = -(int)(((long long)mul * tmp12) >> 12);
    p->_20 = (int)(((long long)mul * det20) >> 12);
    p->_21 = -(int)(((long long)mul * (int)(((long long)pSrc->_00 * pSrc->_21 - (long long)pSrc->_20 * pSrc->_01) >> 12)) >> 12);
    p->_22 = (int)(((long long)mul * (int)(((long long)pSrc->_00 * pSrc->_11 - (long long)pSrc->_10 * pSrc->_01) >> 12)) >> 12);

    if (p == &tmp) {
        FUN_0206564c(&tmp, pDst);
    }
    return 0;
}
