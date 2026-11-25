// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct {
    Key key;
    int v[3];
} Data16;

extern char *DAT_02108d04;
extern void *FUN_02086e3c(void);
extern Data16 *FUN_020b07b0(void *);
extern Data16 *FUN_020b08a0(void *);
extern char *FUN_020ba918(unsigned int);
extern char *FUN_0203c3c0(void *, unsigned int, unsigned int, void *, void *);
extern void FUN_02039534(void *, void *);
extern void FUN_020847c8(unsigned int, void *);

void *FUN_0203c1bc(unsigned int arg, unsigned int other) {
    Data16 a;
    Data16 b;
    unsigned char copy[16];
    Key k;
    int i, sum, c1, c2;
    char *s;
    a = *FUN_020b07b0(FUN_02086e3c());
    sum = 0; for (i = 0; i < 3; i++) sum += a.v[i];
    k = a.key;
    c1 = !((((unsigned int)k.b[0] << 24) | ((unsigned int)k.b[1] << 16) | ((unsigned int)k.b[2] << 8) | k.b[3]) != ~0u);
    c2 = !((c1 == 0) || (sum != 0));
    if (c2 != 0) {
        a.key.b[0] = 0;
        a.key.b[1] = 0;
    }
    b = *FUN_020b08a0(FUN_02086e3c());
    if (DAT_02108d04 == 0) {
        s = FUN_020ba918(0xe30);
        if (s != 0) {
            s = FUN_0203c3c0(s, arg, other, &a, &b);
        }
        DAT_02108d04 = s;
        if (s != 0 && *(void **)(s + 0x1b0) != 0) {
            FUN_02039534(copy, *(char **)(s + 0x1b0) + 4);
            FUN_020847c8(*(unsigned int *)(DAT_02108d04 + 0xfc), copy);
        }
    }
    return DAT_02108d04;
}
