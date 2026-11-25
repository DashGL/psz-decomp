// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
typedef struct {
    unsigned int f0;
    unsigned int f4;
    char *a[3];
    char *b[3];
} Obj48458;
extern void FUN_02032dfc(void *, void *);
extern int FUN_0206d36c(void *, int *);
extern void FUN_020485e8(void *, Vec *);
extern void FUN_020487d8(void *);
extern void FUN_0204a8c4(int, int, Vec *, int);
extern void *DAT_02108c64;
extern void *DAT_02108d04;

void FUN_02048458(Obj48458 *s) {
    Vec position;
    unsigned int descriptor[5];
    Vec scale;
    int mode = -1, amount = 4096, i;
    FUN_02032dfc(descriptor, DAT_02108c64);
    if (FUN_0206d36c(descriptor, &mode) && mode == 2) amount *= 2;
    scale.x = amount;
    scale.y = amount;
    scale.z = amount;
    FUN_020485e8(s, &scale);
    for (i = 0; i < 3; i++) {
        if (s->a[i]) {
            *(unsigned int *)(s->a[i] + 280) = s->f4;
            FUN_020487d8(s->a[i]);
            if (s->f4 && i > 1) {
                *(unsigned int *)(s->a[i] + 228) |= 1;
            }
        }
        if (s->b[i]) {
            *(unsigned int *)(s->b[i] + 280) = s->f4;
            FUN_020487d8(s->b[i]);
            if (s->f4 && i > 1) {
                *(unsigned int *)(s->b[i] + 228) |= 1;
            }
        }
    }
    if (!s->f4 && DAT_02108d04) {
        position.x = 0;
        position.y = 0;
        position.z = 0;
        if (s->a[0]) position = *(Vec *)(s->a[0] + 92);
        FUN_0204a8c4(0, 7, &position, -1);
    }
}
