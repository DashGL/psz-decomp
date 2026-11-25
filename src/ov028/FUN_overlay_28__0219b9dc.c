// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec facing, difference; } Frame;
extern int FUN_020370b8(void *, int, void *);
extern int FUN_020370ec(void *, int, void *);
extern void FUN_02037924(void *);
extern void FUN_020bbfbc(void *, int);
#pragma thumb off
extern int FUN_0205c7ac(void *, void *);
#pragma thumb on
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_28__0219b9dc(int *self) {
    Frame f;
    int *state = (int *)self[2];
    void *owner = (void *)self[1];
    int target = state[20];
    int dir;
    if (!FUN_020370b8(owner, target, &f.difference)) {
        FUN_02037924(state);
        return;
    }
    if (!FUN_020370ec(owner, target, &f.facing)) {
        FUN_02037924(state);
        return;
    }
    dir = state[22];
    if (dir == 0) {
        FUN_020bbfbc(&f.difference, 0x4000);
        dir = FUN_0205c7ac(&f.facing, &f.difference) < 0 ? 1 : 2;
        state[22] = dir;
    }
    if (dir == 1) {
        *(unsigned short *)(self + 3) = 0x3c00;
        FUN_02040c0c(owner, 0, 4, 4096, 0);
    } else {
        *(unsigned short *)(self + 3) = 0xc400;
        FUN_02040c0c(owner, 0, 5, 4096, 0);
    }
    self[4] = 0;
}
