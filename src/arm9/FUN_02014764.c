// flags: -O4,p -noThumb
#pragma opt_propagation off
struct S_02104754 { int f0, f4, f8, idx; };
struct Mtx2D { int _00, _01, _10, _11, _20, _21; };
extern struct S_02104754 DAT_02104754;
extern int DAT_02104764[];
extern struct Mtx2D DAT_021048e4[];
extern struct Mtx2D DAT_02104be4[];
extern void FUN_020149f8(struct Mtx2D *, struct Mtx2D *, struct Mtx2D *);

void FUN_02014764(int x, int y, int z) {
    if (DAT_02104754.f4) {
        int idx = DAT_02104754.idx;
        DAT_021048e4[idx]._20 += x;
        DAT_021048e4[idx]._21 += y;
        DAT_02104764[idx] += z;
    } else {
        struct Mtx2D m;
        m._20 = x;
        m._00 = 0x1000;
        m._01 = 0;
        m._10 = 0;
        m._11 = 0x1000;
        m._21 = y;
        FUN_020149f8(&m, &DAT_021048e4[DAT_02104754.idx], &DAT_021048e4[DAT_02104754.idx]);
        FUN_020149f8(&m, &DAT_02104be4[DAT_02104754.idx], &DAT_02104be4[DAT_02104754.idx]);
        DAT_02104764[DAT_02104754.idx] += z;
    }
}
