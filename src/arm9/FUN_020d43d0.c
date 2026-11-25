// flags: -O4,p
typedef struct {
    int f0[11];
    int f2c;
} S_d43d0;
extern void *FUN_020d4bc0(S_d43d0 *, int, unsigned short);
extern int FUN_020d3030(S_d43d0 *, void *, int, unsigned short, int, int, int, int);
extern int FUN_020d37d0(void *, int, int);
int FUN_020d43d0(S_d43d0 *a, int b, unsigned short c, int d) {
    void *r4 = FUN_020d4bc0(a, b, c);
    if (a->f2c != 0) {
        if (FUN_020d3030(a, r4, b, c, 1, 0, 0, d) == 0) {
            return 0;
        }
    }
    if (r4 == 0) {
        return 1;
    }
    if (FUN_020d37d0(r4, 6, 1) != 0) {
        return 1;
    }
    return 0;
}
