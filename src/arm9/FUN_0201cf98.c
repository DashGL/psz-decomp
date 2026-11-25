// flags: -O4,p -noThumb
typedef struct { int x, y, z; } VecFx32;
typedef struct {
    int _00, _01, _02, _03;
    int _10, _11, _12, _13;
    int _20, _21, _22, _23;
    int _30, _31, _32, _33;
} MtxFx44;

extern int DAT_02105724[];
extern char DAT_02105768[];
extern void FUN_0205b960(const VecFx32 *, const void *, VecFx32 *);
extern void FUN_0205c638(int);
extern long long FUN_0205c5dc(void);
extern void FUN_02019968(int *, int *, int *, int *);

int FUN_0201cf98(const VecFx32 *pos, int *outx, int *outy) {
    const MtxFx44 *m = (const MtxFx44 *)DAT_02105724; VecFx32 v; int rval; int x, y, w; long long invW; int x1, y1, x2, y2;
    FUN_0205b960(pos, DAT_02105768, &v);
    w = (int)(((long long)v.x * m->_03 + (long long)v.y * m->_13 + (long long)v.z * m->_23) >> 12);
    w += m->_33;
    FUN_0205c638(w);

    x = (int)(((long long)v.x * m->_00 + (long long)v.y * m->_10 + (long long)v.z * m->_20) >> 12);
    x += m->_30;
    y = (int)(((long long)v.x * m->_01 + (long long)v.y * m->_11 + (long long)v.z * m->_21) >> 12);
    y += m->_31;

    invW = FUN_0205c5dc();

    x = ((int)((invW * x + 0x80000000LL) >> 32) + 0x1000) / 2;
    y = ((int)((invW * y + 0x80000000LL) >> 32) + 0x1000) / 2;

    if (x < 0 || y < 0 || x > 0x1000 || y > 0x1000) {
        rval = -1;
    } else {
        rval = 0;
    }

    FUN_02019968(&x1, &y1, &x2, &y2);
    { int dx = x2 - x1; int dy = y2 - y1; *outx = x1 + (((x * dx) + 0x800) >> 12); *outy = 191 - y1 - (((y * dy) + 0x800) >> 12); }
    return rval;
}
