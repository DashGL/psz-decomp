// flags: -O4,s
typedef struct { unsigned char a, b, c, d; } Key;
typedef struct { int v[5]; } Table;
extern const Table DAT_020f5120;
extern int FUN_020a7c64(int);
extern int FUN_0208a094(void *);

int FUN_020a7bd8(unsigned char *item) {
    int result = 0;
    Key key = *(Key *)item;
    int type = FUN_020a7c64(key.d);
    int value = FUN_0208a094(item);
    Table limits = DAT_020f5120;
    if (type >= 1 && type < 6) {
        if (value >= limits.v[type - 1]) {
            result = 1;
        } else if (type == 4 && (((*(int *)(item + 8) & (int)0x80000000) >> 31) & 1)) {
            result = 1;
        }
        if (type == 3 && (unsigned int)(item[3] - 9) <= 3) {
            result = 1;
        }
    } else {
        result = 1;
    }
    return result;
}
