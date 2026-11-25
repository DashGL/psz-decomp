// flags: -O4,s
typedef unsigned long long u64;
struct Pair64 { unsigned int lo, hi; };
extern int FUN_020c0af8(u64, struct Pair64 *, int);
int FUN_020c0a40(u64 key, struct Pair64 *table, int count) {
    int index = FUN_020c0af8(key, table, count);
    if (index >= 0) {
        struct Pair64 *dst = table + index;
        struct Pair64 *src = dst - 1;
        if (src >= table) {
            while (src >= table) {
                unsigned int lo = src->lo;
                unsigned int hi = src->hi;
                src--;
                dst->lo = lo;
                dst->hi = hi;
                dst--;
            }
        }
        table[0].lo = (unsigned int)key;
        table[0].hi = (unsigned int)(key >> 32);
        return 1;
    }
    return 0;
}
