// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec {
    int x;
    int y;
    int z;
} Vec;

extern int DAT_overlay_26__0219b70c;
extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_020370ec(void *, int, Vec *);
#pragma thumb off
extern int FUN_0205c7ac(const Vec *, const Vec *);
#pragma thumb on
extern void FUN_02037924(void *);
extern void FUN_020bbfbc(Vec *, unsigned int);
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_26__0219a278(int *self) {
    int *state = (int *)self[2];
    void *owner = (void *)self[1];
    int target = state[19];
    int dot;
    int distance;
    Vec direction;
    Vec facing;
    long long x;
    long long y;
    long long z;

    if (!FUN_020370b8(owner, target, &direction)) {
        FUN_02037924(state);
        return;
    }
    if (!FUN_020370ec(owner, target, &facing)) {
        FUN_02037924(state);
        return;
    }
    FUN_020bbfbc(&direction, 16384);
    dot = FUN_0205c7ac(&facing, &direction);
    z = (long long)direction.z * direction.z;
    x = (long long)direction.x * direction.x;
    y = (long long)direction.y * direction.y;
    distance = (int)((unsigned int)((z + 2048) >> 12) + ((unsigned int)((x + 2048) >> 12) + (unsigned int)((y + 2048) >> 12)));
    if (dot < 0) {
        self[3] = ((distance < DAT_overlay_26__0219b70c) ? E1 : E0) ? 3 : 1;
        FUN_02040c0c(owner, 0, 4, 4096, 0);
    } else {
        self[3] = ((distance < DAT_overlay_26__0219b70c) ? E1 : E0) ? 2 : 0;
        FUN_02040c0c(owner, 0, 3, 4096, 0);
    }
}
