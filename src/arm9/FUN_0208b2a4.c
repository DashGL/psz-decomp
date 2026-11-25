// flags: -O4,s
typedef struct { unsigned short id[8]; } Icons;
typedef struct { unsigned char b[4]; } Item;
typedef struct { unsigned short id, a, b, pad; int x, y; } Draw;

extern Icons DAT_020f3eec;
extern int FUN_0208b1e0(void *, void *);
extern int FUN_02087138(void *);
extern int FUN_020848d0(int, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_0208b21c(void *, int, int);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern char *FUN_02084568(void *);
extern char *FUN_020845a8(void *);
extern void FUN_02071d0c(Draw *);
extern void FUN_020c32b4(Draw *, void *);

void FUN_0208b2a4(char *s) {
    Icons ids;
    Draw d;
    Item a, b, c;
    char *p;
    int cls, i, ok;
    unsigned short fallback;

    if (!FUN_0208b1e0(s, s)) return;
    if (FUN_02087138(FUN_02086e3c())) {
    p = FUN_020870c4(FUN_02086e3c());
    ids = DAT_020f3eec;
    cls = FUN_020848d0((signed char)p[32], (signed char)p[34]);
    FUN_02071d0c(&d);
    d.x = 173 << 12;
    d.y = d.x * 2;
    fallback = ids.id[7];
    for (i = 0; i < 7; ++i) {
        if (i == cls) {
            d.id = 92;
            FUN_020c32b4(&d, *(void **)(s + 32));
        }
        ok = 0;
        switch ((unsigned char)s[0]) {
        case 0:
            a = *(Item *)s;
            p = FUN_02084568(&a);
            if (p) ok = ((*(unsigned int *)p >> 20) & (1 << i)) != 0;
            break;
        case 1:
            b = *(Item *)s;
            p = FUN_020845a8(&b);
            if (p) ok = (((unsigned int)*(unsigned short *)(p + 14) >> 2) & (1 << i)) != 0;
            break;
        case 3:
            c = *(Item *)s;
            if (FUN_0203a1a8(&c, 1)) ok = FUN_0208b21c(s, (unsigned char)s[2], i);
            break;
        }
        if (ok == 1) d.id = ids.id[i];
        else d.id = fallback;
        FUN_020c32b4(&d, *(void **)(s + 32));
        d.x += 11 << 12;
    }
    }
}
