// flags: -O4,s
typedef struct { unsigned char b[4]; } Record;
struct U16BF { unsigned short low5 : 5; };
struct U8BF { unsigned char low5 : 5; };
extern char *FUN_02084568(void *);
extern char *FUN_020845a8(void *);
extern char *FUN_020845fc(void *);
extern char *FUN_02084638(void *);

int FUN_02050adc(void *unused, Record *src) {
    int result = 0;
    char *p;
    if (src->b[0] == 0) {
        Record a = *src;
        p = FUN_02084568(&a);
        if (p) result = (*(unsigned short *)(p + 10) >> 11) + 1;
    } else if (src->b[0] == 1) {
        Record b = *src;
        p = FUN_020845a8(&b);
        if (p) result = ((struct U16BF *)p)->low5 + 1;
    } else if (src->b[0] == 2) {
        Record c = *src;
        p = FUN_020845fc(&c);
        if (p) result = ((struct U8BF *)p)->low5 + 1;
    } else if (src->b[0] == 3) {
        Record d = *src;
        p = FUN_02084638(&d);
        if (p) result = ((struct U16BF *)p)->low5 + 1;
    }
    if (result > 7) result = 7;
    return result;
}
