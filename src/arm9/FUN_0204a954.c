// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
typedef struct { unsigned int w[12]; } Matrix;
#pragma thumb off
extern void FUN_0205aaa4(void *, Matrix *);
extern void FUN_0205b16c(Matrix *);
extern void FUN_0205b68c(Matrix *, Matrix *, Matrix *);
extern void FUN_0205b1c8(Matrix *, Matrix *, unsigned int, unsigned int, unsigned int);
#pragma thumb on
extern void FUN_02035408(Vector *, unsigned int, unsigned int, unsigned int);
void FUN_0204a954(Vector *out, char *s, void *rotation, Vector *shift) {
    Matrix a, b;
    Vector v;
    FUN_0205aaa4(rotation, &a);
    FUN_0205b16c(&b);
    FUN_0205b68c(&b, &a, &b);
    FUN_0205b1c8(&b, &b, shift->x, shift->y, shift->z);
    FUN_02035408(&v, b.w[9] + *(unsigned int *)(s + 0), b.w[10] + *(unsigned int *)(s + 4), b.w[11] + *(unsigned int *)(s + 8));
    *out = v;
}
