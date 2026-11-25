// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_0205c8cc(void *, void *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_24__02199dd4(int *self) {
    int matrix43[12], matrix33[9];
    Vec v;
    int *owner = (int *)self[1];
    unsigned short angle;
    if (FUN_0204260c(FUN_02036c88(owner, 0), 0, matrix43, matrix33)) {
        v = *(Vec *)0x0219bf50;
        FUN_0205b0f0(&v, matrix33, &v);
        v.y = 0;
        FUN_0205c8cc(&v, &v);
        angle = FUN_0205cc08(v.z);
        if (v.x < 0) angle = 65536 - angle;
        ((unsigned short *)owner)[34] = angle;
    }
    FUN_02040c0c(owner, 0, 1, 4096, 0);
}
