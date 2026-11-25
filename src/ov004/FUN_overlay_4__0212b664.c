// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { unsigned short rank : 5; } Bits16;
typedef struct { unsigned char rank : 5; } Bits8;
extern char *FUN_02084568(const void *);
extern Bits16 *FUN_020845a8(const void *);
extern Bits8 *FUN_020845fc(const void *);
extern Bits16 *FUN_02084638(const void *);

int FUN_overlay_4__0212b664(void *unused, const unsigned char *item) {
    Key a, b, c, d;
    int result = 0;
    switch (item[0]) {
    case 0:
        if (item[1] == 17) break;
        a = *(const Key *)item;
        {
            char *p = FUN_02084568(&a);
            if (p) result = ((int)*(unsigned short *)(p + 10) >> 11) + 1;
        }
        break;
    case 1:
        b = *(const Key *)item;
        {
            Bits16 *p = FUN_020845a8(&b);
            if (p) result = p->rank + 1;
        }
        break;
    case 2:
        c = *(const Key *)item;
        {
            Bits8 *p = FUN_020845fc(&c);
            if (p) result = p->rank + 1;
        }
        break;
    case 3:
        d = *(const Key *)item;
        {
            Bits16 *p = FUN_02084638(&d);
            if (p) result = p->rank + 1;
        }
        break;
    }
    return result;
}
