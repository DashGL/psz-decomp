// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Record;

extern char *FUN_02084568(void *);
extern char *FUN_020845a8(void *);

int FUN_0204daec(Record *src) {
    int result = 0;
    int limit = -1;
    char *p;
    int val;
    if (src->b[0] == 0) {
        Record a = *src;
        p = FUN_02084568(&a);
        if (p) {
            limit = *(signed char *)(p + 4);
        }
    } else if (src->b[0] == 1) {
        Record b = *src;
        p = FUN_020845a8(&b);
        if (p) {
            limit = *(signed char *)(p + 9);
        }
    }
    val = (((int)(*(unsigned int *)(src + 1) & 0xfe000000u)) >> 25) & 0x7f;
    if (limit >= 0 && val >= limit) {
        result = 1;
    }
    return result;
}
