// flags: -O4,s
typedef struct { unsigned char b[4]; } Record;
extern int DAT_02109854[][5];
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_020844e4(void *);
int FUN_02046694(void *unused, Record *src) {
    int index; unsigned int type = src->b[1]; int result = -1; Record c, a, b;
    a = *src;
    if (FUN_0203a820(&a, 0) && type != 17) {
        index = 0;
        b = *src;
        if (!FUN_0203a1a8(&b, 0)) {
            c = *src;
            index = FUN_020844e4(&c);
        }
        if (index >= 0 && index < 5) {
            result = DAT_02109854[type][index];
            if (type == 12 && index == 3) result = DAT_02109854[type][0];
        }
    }
    return result;
}
