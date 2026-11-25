//cpp
// flags: -O4,s
enum E { E0 = 0, E1 = 1 };
extern "C" int FUN_0204db98(void *, int);
#pragma always_inline on
static inline E is_cat3(int t) {
    E r = E0; if (t >= 14 && t <= 16) r = E1; return r;
}
extern "C" int FUN_020b66ec(void *unused, unsigned char *item) {
    if (FUN_0204db98(item, 0)) {
        if (is_cat3(item[1])) {
            return (unsigned char)(((*(int *)(item + 4) & (int)0xfe000000u) >> 25) << 1);
        }
    }
    return 0;
}
