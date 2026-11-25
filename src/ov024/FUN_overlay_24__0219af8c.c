// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_0219c750, DAT_0219c754;
extern int FUN_020370b8(void *, void *, Vec *);
extern void FUN_02037924(void *), FUN_0205c8cc(Vec *, Vec *), FUN_02040c0c(void *, int, int, int, int);
extern void *FUN_02091cc0(void *, void *, void *);
void FUN_overlay_24__0219af8c(int *self) {
    Vec direction, first, second;
    int *state = (int *)self[2];
    void *owner = (void *)self[1];
    if (!FUN_020370b8(owner, (void *)state[17], &direction)) FUN_02037924(state);
    else {
        if (direction.x || direction.y || direction.z) FUN_0205c8cc(&direction, &direction);
        FUN_02091cc0(&first, &direction, &DAT_0219c754);
        *(Vec *)(self + 3) = first;
        FUN_02091cc0(&second, &direction, &DAT_0219c750);
        *(Vec *)(self + 6) = second;
        FUN_02040c0c(owner, 0, 2, 4096, 0);
    }
}
