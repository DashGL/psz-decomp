// flags: -O4,p -noThumb
struct S_02104754 {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int idx;
};
struct Entry24 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    unsigned int f;
};
extern struct S_02104754 DAT_02104754;
extern unsigned int DAT_02104764[];
extern struct Entry24 DAT_021048f4[];
extern struct Entry24 DAT_02104bf4[];

void FUN_02014860(unsigned int x, unsigned int y, unsigned int z) {
    unsigned int idx = DAT_02104754.idx;
    DAT_021048f4[idx].a = x;
    DAT_021048f4[idx].b = y;
    if (DAT_02104754.f4 == 0) {
        DAT_02104bf4[idx].a = x;
        DAT_02104bf4[idx].b = y;
    }
    DAT_02104764[idx] = z;
}
