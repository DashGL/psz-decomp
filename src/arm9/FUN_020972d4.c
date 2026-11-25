// flags: -O4,s
typedef struct { unsigned short a, b; } Head;
typedef struct { unsigned short v[4]; } Tail;
typedef struct { Head h; Tail t; } Record;
extern void *FUN_02099444(void);
extern int FUN_02099de0(void *, int);
extern Record *FUN_02099df8(void *, int);
void FUN_020972d4(int *s, Record *out, int index) {
    int count = FUN_02099de0(FUN_02099444(), s[0]);
    if (index >= 0 && index < count) {
        Record *p = FUN_02099df8(FUN_02099444(), s[0]);
        if (p) {
            out->h = p[index].h;
            out->t = p[index].t;
        }
    }
}
