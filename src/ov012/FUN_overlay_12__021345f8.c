// flags: -O4,s
typedef struct { unsigned char a, b, c, d; } Desc;
typedef struct { int v[5]; } Table5;
extern const Table5 data_0213bc78;
extern int FUN_overlay_12__0213419c(int);
extern int FUN_overlay_12__021341a8(int);
extern int FUN_02089928(const void *, unsigned int);
int FUN_overlay_12__021345f8(const int *item, int base)
{
    int factor;
    Table5 levels;
    Desc cat;
    Desc sub;
    Desc desc;
    if (base < 0) base = 0;
    factor = 0;
    desc = *(const Desc *)item;
    cat = desc;
    switch (cat.a) {
    case 0:
        factor += FUN_overlay_12__0213419c(((item[1] & (int)0xfe000000) >> 25) & 0x7f);
        {
            int v = (item[2] & (0x3e << 12)) >> 13;
            factor += (v >= 1 && v < 21) ? 50 : 0;
        }
        factor += FUN_overlay_12__021341a8(FUN_02089928(item, 1));
        factor += FUN_overlay_12__021341a8(FUN_02089928(item, 2));
        factor += FUN_overlay_12__021341a8(FUN_02089928(item, 3));
        factor += FUN_overlay_12__021341a8(FUN_02089928(item, 4));
        factor += FUN_overlay_12__021341a8(FUN_02089928(item, 5));
        break;
    case 1:
        factor += FUN_overlay_12__0213419c(((item[1] & (int)0xfe000000) >> 25) & 0x7f);
        {
            int v = (item[1] & (7 << 22)) >> 22;
            if (v <= 4) {
                levels = data_0213bc78;
                v = levels.v[v];
            } else {
                v = 0;
            }
            factor += v;
        }
        break;
    case 3:
        sub = desc;
        if (sub.b == 1) {
            int v = (item[1] & (0xff << 14)) >> 14;
            factor += (v > 0 && v <= 15) ? (v - 1) * 100 : 0;
        }
        break;
    }
    if (factor != 0) {
        unsigned long long b64 = (unsigned long long)(long long)base;
        unsigned long long adj = b64 + (b64 * (unsigned int)factor) / 100ULL;
        if (adj > 99999999ULL) adj = 99999999ULL;
        base = (int)adj;
    }
    return base;
}
