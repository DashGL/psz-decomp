// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec first, second, direction; } Frame;
extern int FUN_020370b8(void *, int, void *);
extern int FUN_02037208(void *, int);
extern void FUN_02037924(void *);
extern void FUN_020bbfbc(void *, int);
extern void FUN_0205c8cc(void *, void *);
extern void FUN_02091cc0(void *, void *, void *);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_27__0219bc38(int *self) {
    Frame f;
    void *owner;
    int *state;
    state = (int *)self[2];
    owner = (void *)self[1];
    if (!FUN_020370b8(owner, state[19], &f.direction)) { FUN_02037924(state); return; }
    FUN_020bbfbc(&f.direction, FUN_02037208(owner, 2) == 0 ? 0x2000 : 0xe000);
    if (f.direction.x || f.direction.y || f.direction.z) FUN_0205c8cc(&f.direction, &f.direction);
    FUN_02091cc0(&f.second, &f.direction, (void *)0x0219c814);
    *(Vec *)(self + 6) = f.second;
    FUN_02091cc0(&f.first, &f.direction, (void *)0x0219c818);
    *(Vec *)(self + 3) = f.first;
    FUN_02040c0c(owner, 0, 2, 4096, 0);
}
