// flags: -O4,s
typedef union {
    unsigned int w[4];
    unsigned char b[16];
} Record;
typedef struct {
    int x, y, z;
} Vector;

extern void FUN_020945e0(void *, unsigned int);
extern int FUN_0203d364(void *, Vector *);
extern int FUN_0203d2a4(void *);
extern void FUN_02094638(void *, unsigned int, Vector *);

enum { E0 = 0, E1 = 1 };

void FUN_0203d2d8(char *s, char *source, unsigned int arg) {
    Record r = *(Record *)(source + 384);
    Vector v;
    int type;

    *(unsigned short *)(s + 192) = *(unsigned short *)(s + 318);
    type = r.b[1];
    if (((type >= 8 && type <= 13) ? E1 : E0) != 0 || type == 6) {
        FUN_020945e0(s, arg);
    } else if (FUN_0203d364(s, &v) == 1 && FUN_0203d2a4(s)) {
        FUN_02094638(s, arg, &v);
    } else {
        FUN_020945e0(s, arg);
    }
}
