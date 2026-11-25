// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { Key k; int f4; int f8; int fc; } Record;
extern char *FUN_02086e3c(void);
extern Record *FUN_020b00ac(void *, int);
extern int FUN_020458f8(void *, void *);

int FUN_0204ea00(Record *src) {
    int result = -1, i;
    char *m = FUN_02086e3c() + 16;
    for (i = 0; i < 80; i++) {
        Record r = *FUN_020b00ac(m, i);
        Key b, a;
        int hit = 0;
        a = r.k;
        b = src->k;
        if (FUN_020458f8(&b, &a) && ((src->f4 & 0x3fc000) >> 14) == ((r.f4 & 0x3fc000) >> 14)) {
            hit = 1;
        }
        if (hit) result = i;
    }
    return result;
}
