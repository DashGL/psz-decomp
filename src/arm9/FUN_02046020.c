// flags: -O4,s
typedef struct { unsigned int x, y, z; } V;
typedef struct { unsigned char b[4]; } Rec;

extern V DAT_02109200[];
extern V DAT_02109344[];
extern V DAT_02109488[];
extern V DAT_02109cb0[];
extern V DAT_021095cc[];
extern V DAT_02109710[];

extern int FUN_0203a820(void *, int);
extern int FUN_02046660(void *, void *);
extern unsigned int FUN_02045e30(unsigned int, unsigned int, unsigned int);
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);

void FUN_02046020(void *self, V *output, Rec *record, int alternate) {
    V a, b, c, d, e, f, g, zero;
    Rec second, first;
    unsigned int kind, stage, index;

    first = *record;
    if (FUN_0203a820(&first, 0)) {
        kind = record->b[1];
        stage = record->b[3];
        second = *record;
        index = FUN_02045e30(kind, stage, FUN_02046660(self, &second));
        switch (kind) {
            case 8:
                FUN_02035408(&a, DAT_02109200[index].x, DAT_02109200[index].y, DAT_02109200[index].z);
                *output = a;
                break;
            case 9:
                FUN_02035408(&b, DAT_02109344[index].x, DAT_02109344[index].y, DAT_02109344[index].z);
                *output = b;
                break;
            case 10:
                FUN_02035408(&c, DAT_02109488[index].x, DAT_02109488[index].y, DAT_02109488[index].z);
                *output = c;
                break;
            case 11:
                if (alternate) {
                    unsigned int idx = index * 2;
                    FUN_02035408(&d, DAT_02109cb0[idx].x, DAT_02109cb0[idx].y, DAT_02109cb0[idx].z);
                    *output = d;
                } else {
                    unsigned int idx = index * 2 + 1;
                    FUN_02035408(&e, DAT_02109cb0[idx].x, DAT_02109cb0[idx].y, DAT_02109cb0[idx].z);
                    *output = e;
                }
                break;
            case 12:
                FUN_02035408(&f, DAT_021095cc[index].x, DAT_021095cc[index].y, DAT_021095cc[index].z);
                *output = f;
                break;
            case 13:
                FUN_02035408(&g, DAT_02109710[index].x, DAT_02109710[index].y, DAT_02109710[index].z);
                *output = g;
                break;
        }
    } else {
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        *output = zero;
    }
}
