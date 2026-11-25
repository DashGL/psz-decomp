// flags: -O4,s
typedef struct { unsigned int lo, hi; } Entry;
typedef unsigned long long u64;
extern int FUN_020c0af8(u64, Entry *, int);

int FUN_020c0a7c(u64 key, Entry *table, int count) {
    int index = FUN_020c0af8(key, table, count);
    if (index >= 0) {
        Entry *dst = &table[index];
        Entry *src = dst + 1;
        Entry *end = &table[count] - 1;
        if (src <= end) {
            while (src <= end) {
                unsigned int a = src->lo;
                unsigned int b = src->hi;
                src++;
                dst->lo = a;
                dst->hi = b;
                dst++;
            }
        }
        end->lo = 0;
        end->hi = 0;
        return 1;
    }
    return 0;
}
