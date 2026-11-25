//cpp
// flags: -O4,s
enum E { E0 = 0, E1 = 1 };
extern "C" int FUN_0204db98(void *, int);
#pragma always_inline on
static inline E is_cat1(int t) { E r = E0; if (t >= 1 && t <= 7) r = E1; return r; }
static inline E is_cat2(int t) { return (t >= 8 && t <= 13) ? E1 : E0; }
extern "C" int FUN_020b6388(void *unused, unsigned char *item) {
    if (FUN_0204db98(item, 0)) {
        unsigned char t = item[1];
        if (is_cat1(t) || is_cat2(t)) {
            return (unsigned char)(((*(int *)(item + 4) & (int)0xfe000000u) >> 25) << 1);
        }
    }
    return 0;
}
