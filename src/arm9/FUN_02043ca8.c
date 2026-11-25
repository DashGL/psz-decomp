// flags: -O4,s
extern short DAT_020ed83c[];
typedef struct { unsigned int w[9]; } Matrix;
typedef struct { unsigned int w[3]; } Vector;
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_02043e94(void *, void *);
extern void FUN_020380a8(void *, unsigned short);
extern void FUN_0205ab90(void *, int, int);
extern void FUN_0205abac(void *, int, int);
extern void FUN_0205abc8(void *, int, int);
#pragma thumb off
extern void FUN_0205aed0(void *, void *, void *);
#pragma thumb reset

#define ROT(fn, mat, angle) fn(&(mat), DAT_020ed83c[2 * ((angle) >> 4)], DAT_020ed83c[2 * ((angle) >> 4) + 1])

void FUN_02043ca8(char *s) {
    int i;
    Matrix result1, x1, y1, z1;
    Matrix result2, x2, y2, z2;
    Vector position;
    if (((*(unsigned int *)(s + 148) & 1) ? 1 : 0) == 0) {
        return;
    }
    for (i = 0; i < *(int *)(s + 156); i++) {
        char *record = *(char **)(s + 152) + 112 * i;
        char *object = *(char **)record;
        if (((*(short *)(record + 70) & 1) ? 0 : 1) != 0) {
            continue;
        }
        switch (*(int *)(record + 4)) {
        case 1:
            FUN_02035408(&position,
                *(unsigned int *)(s + 56) + *(unsigned int *)(record + 16),
                *(unsigned int *)(s + 60) + *(unsigned int *)(record + 20),
                *(unsigned int *)(s + 64) + *(unsigned int *)(record + 24));
            FUN_02043e94(object, &position);
            if (!*(unsigned short *)(record + 64) && !*(unsigned short *)(record + 68)) {
                FUN_020380a8(object, (unsigned short)(*(unsigned short *)(s + 68) + *(unsigned short *)(record + 66)));
            } else {
                ROT(FUN_0205ab90, x1, *(unsigned short *)(record + 64));
                ROT(FUN_0205abac, y1, (*(unsigned short *)(record + 66) + *(unsigned short *)(s + 68)));
                ROT(FUN_0205abc8, z1, *(unsigned short *)(record + 68));
                FUN_0205aed0(&z1, &x1, &result1);
                FUN_0205aed0(&result1, &y1, &result1);
                *(Matrix *)(object + 144) = result1;
            }
            break;
        case 0:
            FUN_02043e94(object, record + 16);
            if (((*(short *)(record + 70) & 4) ? 1 : 0) != 0) {
                *(Matrix *)(object + 144) = *(Matrix *)(record + 28);
            } else if (!*(unsigned short *)(record + 64) && !*(unsigned short *)(record + 68)) {
                FUN_020380a8(object, *(unsigned short *)(record + 66));
            } else {
                ROT(FUN_0205ab90, x2, *(unsigned short *)(record + 64));
                ROT(FUN_0205abac, y2, *(unsigned short *)(record + 66));
                ROT(FUN_0205abc8, z2, *(unsigned short *)(record + 68));
                FUN_0205aed0(&z2, &x2, &result2);
                FUN_0205aed0(&result2, &y2, &result2);
                *(Matrix *)(object + 144) = result2;
            }
            break;
        case 2:
            break;
        }
    }
}
