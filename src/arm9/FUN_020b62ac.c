// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct {
    unsigned int val : 12;
    unsigned int pad0 : 20;
    unsigned short f4;
    signed char f6;
    unsigned char f7;
    unsigned short kind : 6;
} Data;
extern int FUN_0204db98(Key *, int);
extern int FUN_02084684(int, Key *, short *);
extern int FUN_02035b60(int);
extern int FUN_020848e0(int, int);
extern Data *FUN_02084568(Key *);
int FUN_020b62ac(char *s, Key *item, int randomize) {
    int result = 0;
    if (FUN_0204db98(item, 0)) {
        int r = 0;
        int type = item->b[1];
        do {
            if (type < 1) break;
            if (type > 7) break;
            r = 1;
        } while (0);
        if (r || !(type < 8 || type > 13) != 0) {
            if (randomize) {
                short limits[12];
                Key c = *item;
                if (FUN_02084684(*(int *)(s + 104), &c, limits)) {
                    int low = limits[0];
                    int range = limits[1] - low;
                    if (range >= 0) {
                        result = low + FUN_02035b60(range);
                    }
                }
            } else {
                Key b = *item;
                Data *data = FUN_02084568(&b);
                if (data) {
                    result = data->val;
                }
            }
        } else if (!(type < 14 || type > 16) != 0) {
            Key a = *item;
            Data *data = FUN_02084568(&a);
            if (data) {
                int k = data->kind;
                if (k == 1) {
                    result = FUN_020848e0(k, data->f6);
                }
            }
        }
    }
    return result;
}
