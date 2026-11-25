// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_020866b4(int, Vec *);
extern void FUN_02036348(Vec *, Vec *, Vec *);
extern void FUN_02037390(int *, Vec *);

int FUN_020867c8(int *out, int a, int b) {
    Vec va, vb, d;
    int value;
    if (FUN_020866b4(a, &va) && FUN_020866b4(b, &vb)) {
        FUN_02036348(&d, &va, &vb);
        FUN_02037390(&value, &d);
        *out = *(int *)(((int)&value) & 0xFFFFFFFFFFFFFFFFULL);
        return 1;
    }
    return 0;
}
