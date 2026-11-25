// flags: -O4,s
typedef struct { unsigned char b[4]; } Record;
extern char DAT_02109f38[];
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_020844e4(void *);
extern void FUN_020467d8(void *, void *);

int FUN_02046724(unsigned int *out, unsigned int unused, Record *src, int flag) {
    Record c, a, b;
    int ret = 0;
    int index;
    unsigned char type = src->b[1];
    a = *src;
    if (FUN_0203a820(&a, 0) && type != 17) {
        index = 0;
        b = *src;
        if (!FUN_0203a1a8(&b, 0)) {
            c = *src;
            index = FUN_020844e4(&c);
        }
        if (index >= 0 && index < 5) {
            char *table = DAT_02109f38 + 60 * type;
            FUN_020467d8(out, table + 12 * index);
            if (type == 10 && flag) {
                out[1] += 1;
            }
            if (type == 12 && index == 3) {
                FUN_020467d8(out, table);
            }
            ret = 1;
        }
    }
    return ret;
}
