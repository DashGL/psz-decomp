// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
extern const Vector DAT_021090bc[];
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_02046660(void *, void *);
extern unsigned int FUN_02045e30(int, unsigned int, int);
extern void FUN_02035408(Vector *, unsigned int, unsigned int, unsigned int);
void FUN_0204624c(void *s, Vector *out, unsigned char *p) {
    if (FUN_0203a820(p, 0) && FUN_0203a1a8(p, 16)) {
        unsigned int mode = p[3], index;
        Vector v;
        int value = FUN_02046660(s, p);
        index = FUN_02045e30(16, mode, value);
        FUN_02035408(&v, DAT_021090bc[index].x, DAT_021090bc[index].y, DAT_021090bc[index].z);
        *out = v;
    } else {
        Vector zero;
        zero.x = 0; zero.y = 0; zero.z = 0;
        *out = zero;
    }
}
