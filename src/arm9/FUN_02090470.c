// flags: -O4,s
typedef struct { int a, b, c, d; } Item;
typedef struct { int x, y, z; } Vec;
typedef struct {
    signed char b0, b1, b2, b3, b4, b5;
    short s6;
    int f8, fc;
    signed char b10, b11, b12, b13;
} Desc;
extern char *UNK_02108c64;
extern int FUN_02032d40(void *), FUN_0204ea84(void *, int);
extern void FUN_0204e994(void *, int, int), FUN_0207f3fc(void *), FUN_0207f418(void *), FUN_020bce3c(void *);

int FUN_02090470(char *s) {
    Item copy;
    Desc desc;
    Vec position;
    Item item;
    if (s && FUN_02032d40(UNK_02108c64)) {
        FUN_0204e994(&item, 11, 1);
        copy = item;
        if (FUN_0204ea84(&copy, 1)) {
            signed char *p;
            signed char *src;
            desc.b0 = 1;
            desc.b1 = 0;
            desc.b2 = 0;
            desc.b3 = 0;
            desc.b4 = -1;
            desc.b5 = 0;
            desc.s6 = 0;
            desc.f8 = 0;
            desc.fc = 0;
            FUN_0207f3fc(&desc.b10);
            desc.b2 = 3;
            desc.b3 = 3;
            desc.b0 = 5;
            FUN_0207f418(&desc.b10);
            desc.b4 = *(int *)(s + 252);
            desc.s6 = *(unsigned short *)(s + 192);
            position = *(Vec *)(s + 156);
            desc.f8 = position.x;
            desc.fc = position.z;
            p = (signed char *)UNK_02108c64;
            src = p + 20;
            desc.b10 = ((volatile signed char *)p)[20];
            desc.b11 = src[1];
            desc.b12 = src[2];
            desc.b13 = src[3];
            FUN_020bce3c(&desc);
            return 1;
        }
    }
    return 0;
}
