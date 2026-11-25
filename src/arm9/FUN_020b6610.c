//cpp
// flags: -O4,s
enum E { E0 = 0, E1 = 1 };
struct Key { unsigned char b[4]; };
struct ItemData {
    unsigned int stat : 12;
    unsigned int pad0 : 20;
    unsigned char pad1[2];
    signed char f6;
    unsigned char pad2;
    unsigned short kind : 6;
    unsigned short pad3 : 10;
};
extern "C" {
extern int FUN_0204db98(void *, int);
extern int FUN_02084684(int, void *, void *);
extern int FUN_02035b60(int);
extern int FUN_020848e0(int, int);
extern ItemData *FUN_02084568(void *);
int FUN_020b6610(char *s, Key *item, int randomize);
}

#pragma always_inline on
static inline E is_cat3(int t) {
    E r = E0; if (t >= 14 && t <= 16) r = E1; return r;
}
static inline E is_cat1(int t) { return (t >= 1 && t <= 7) ? E1 : E0; }
static inline E is_cat2(int t) { return (t >= 8 && t <= 13) ? E1 : E0; }

int FUN_020b6610(char *s, Key *item, int randomize) {
    int result = 0;
    if (FUN_0204db98(item, 0)) {
        unsigned char type = item->b[1];
        if (is_cat3(type)) {
            if (randomize) {
                short limits[12];
                Key c = *item;
                if (FUN_02084684(*(int *)(s + 104), &c, limits)) {
                    int low = limits[0];
                    int range = limits[1] - low;
                    if (range >= 0) result = low + FUN_02035b60(range);
                }
            } else {
                Key b = *item;
                ItemData *data = FUN_02084568(&b);
                if (data) result = data->stat;
            }
        } else if (is_cat1(type) || is_cat2(type)) {
            Key a = *item;
            ItemData *data = FUN_02084568(&a);
            if (data) {
                int kind = data->kind;
                if (kind == 5) {
                    result = FUN_020848e0(kind, data->f6);
                }
            }
        }
    }
    return result;
}
