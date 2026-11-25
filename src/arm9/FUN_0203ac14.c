// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int x, y, z; } Vector;
typedef struct { unsigned int w[12]; } Matrix43;
typedef struct { unsigned int w[9]; } Matrix33;

extern int FUN_02042460(void *, int);
extern int FUN_0204260c(void *, unsigned int, Matrix43 *, Matrix33 *);
extern void FUN_02035408(Vector *, unsigned int, unsigned int, unsigned int);
extern int FUN_02034b8c(Vector *, unsigned int);

int FUN_0203ac14(char *s) {
    void *p = *(void **)(s + 0x8c);
    if (p && (((*(unsigned int *)(s + 0xf8) & 0x08000000U) ? E1 : E0) == 0)) {
        if (FUN_02042460(p, 0)) {
            *(unsigned int *)(s + 0x9c) = *(unsigned int *)(s + 0xb4);
            *(unsigned int *)(s + 0xa4) = *(unsigned int *)(s + 0xbc);
        } else {
            Matrix43 a;
            Matrix33 b;
            Vector v;
            if (FUN_0204260c(*(void **)(s + 0x8c), 0, &a, &b) == 1) {
                FUN_02035408(&v, a.w[9], *(unsigned int *)(s + 0xa0), a.w[11]);
                if (!FUN_02034b8c(&v, 0x100)) {
                    *(unsigned int *)(s + 0x9c) = *(unsigned int *)(s + 0xb4);
                    *(unsigned int *)(s + 0xa4) = *(unsigned int *)(s + 0xbc);
                } else {
                    *(unsigned int *)(s + 0xb4) = a.w[9];
                    *(unsigned int *)(s + 0xbc) = a.w[11];
                }
            }
        }
        return 1;
    }
    return 0;
}
