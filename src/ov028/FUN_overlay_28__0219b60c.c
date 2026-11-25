// flags: -O4,s
extern const int DAT_0219c3cc;
extern const int DAT_0219c3d0;

typedef struct Vec {
    int x, y, z;
} Vec;

extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_02037208(void *, int);
extern void FUN_02037924(void *);
extern void FUN_0205c8cc(Vec *, Vec *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_020bbfbc(Vec *, unsigned);
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_28__0219b60c(char *self)
{
    char *state = *(char **)(self + 8);
    void *owner = *(void **)(self + 4);
    Vec direction, scaled, leftScaled, left, rightScaled, right, straight;
    int mode;

    if (!FUN_020370b8(owner, *(int *)(state + 0x50), &direction)) {
        FUN_02037924(state);
        return;
    }
    if (direction.x || direction.y || direction.z) {
        FUN_0205c8cc(&direction, &direction);
    }
    FUN_02091cc0(&scaled, &direction, &DAT_0219c3cc);
    *(Vec *)(self + 24) = scaled;
    switch (FUN_02037208(owner, 4)) {
    case 0:
        mode = 5;
        left = direction;
        FUN_020bbfbc(&left, 49152);
        FUN_02091cc0(&leftScaled, &left, &DAT_0219c3d0);
        *(Vec *)(self + 12) = leftScaled;
        break;
    case 1:
        mode = 4;
        right = direction;
        FUN_020bbfbc(&right, 16384);
        FUN_02091cc0(&rightScaled, &right, &DAT_0219c3d0);
        *(Vec *)(self + 12) = rightScaled;
        break;
    default:
        mode = 2;
        FUN_02091cc0(&straight, &direction, &DAT_0219c3d0);
        *(Vec *)(self + 12) = straight;
        break;
    }
    FUN_02040c0c(*(void **)(self + 4), 0, mode, 4096, 0);
    *(int *)(self + 36) = 0;
}
