// flags: -O4,s
typedef struct Vec {
    int x, y, z;
} Vec;

extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_02036f7c(void *, Vec *);
extern void FUN_0205c8cc(const Vec *, Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern int FUN_0205c7ac(const Vec *, const Vec *);
extern void FUN_02036fa8(void *, const Vec *);
extern int FUN_02041474(void *, int);

void FUN_overlay_29__0219b628(char *self) {
    char *owner = *(char **)(self + 4);
    Vec target;
    Vec current;
    Vec chosen;
    Vec side;
    int sideDot;
    int targetDot;
    int turnDot;
    unsigned short yaw;

    if (!FUN_020370b8(owner, *(int *)(*(char **)(self + 8) + 0x54), &target)) {
        return;
    }
    if (target.x != 0 || target.y != 0 || target.z != 0) {
        FUN_0205c8cc(&target, &target);
    }
    FUN_02036f7c(owner, &current);
    side = current;
    FUN_020bbfbc(&side, 0x4000);
    sideDot = FUN_0205c7ac(&side, &target);
    yaw = *(unsigned short *)(owner + 0x44);
    {
        int delta = (sideDot > 0) ? 0x500 : 0xfb00;
        chosen.x = 0;
        chosen.y = 0;
        chosen.z = 0x1000;
        FUN_020bbfbc(&chosen, (unsigned short)(delta + yaw));
    }
    targetDot = FUN_0205c7ac(&current, &target);
    turnDot = FUN_0205c7ac(&current, &chosen);
    if (turnDot > 0) {
        unsigned gt = (targetDot > turnDot);
        if (gt) {
            chosen = target;
        }
    }
    current = chosen;
    FUN_02036fa8(owner, &current);
    if (FUN_02041474(*(void **)(self + 4), 0)) {
        *(int *)(self + 12) = 1;
    }
}
