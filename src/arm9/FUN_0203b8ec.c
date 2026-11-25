// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
typedef struct { unsigned int words[12]; } Matrix;
extern int FUN_0204260c(void *, int, Matrix *, void *);
extern int FUN_0203b8a0(void *, void *, Vector *, void *);
int FUN_0203b8ec(char *s, void *a, void *b) {
    Matrix first;
    unsigned int second[9];
    Vector v;
    void *p = *(void **)(s + 0x8c);
    if (p) {
        if (FUN_0204260c(p, 2, &first, &second) == 1) {
            v.x = first.words[9];
            v.y = first.words[10];
            v.z = first.words[11];
            return FUN_0203b8a0(s, a, &v, b);
        }
    }
    return 0;
}
