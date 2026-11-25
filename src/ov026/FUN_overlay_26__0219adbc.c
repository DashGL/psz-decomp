// flags: -O4,s
typedef struct { int x, y, z; } Vec_adbc;
typedef struct { Vec_adbc first, second, direction; } Frame_adbc;
extern int FUN_020370b8(void *, int, void *);
extern void FUN_02037924(void *);
#pragma thumb off
extern void FUN_0205c8cc(void *, void *);
#pragma thumb on
extern void FUN_02091cc0(void *, void *, const void *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern const int DAT_0219b80c;
extern const int DAT_0219b810;

void FUN_overlay_26__0219adbc(int *self) {
    Frame_adbc f;
    int *state = (int *)self[2];
    void *owner = (void *)self[1];
    if (!FUN_020370b8(owner, state[19], &f.direction)) {
        FUN_02037924(state);
        return;
    }
    if (f.direction.x || f.direction.y || f.direction.z) {
        FUN_0205c8cc(&f.direction, &f.direction);
    }
    FUN_02091cc0(&f.second, &f.direction, &DAT_0219b80c);
    *(Vec_adbc *)(self + 6) = f.second;
    FUN_02091cc0(&f.first, &f.direction, &DAT_0219b810);
    *(Vec_adbc *)(self + 3) = f.first;
    {
        int animation = 5;
        if (state[21] == 1) animation = 6;
        FUN_02040c0c(owner, 0, animation, 4096, 0);
    }
}
