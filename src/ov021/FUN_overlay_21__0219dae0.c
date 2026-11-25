// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
enum { E0 = 0, E1 = 1 };
extern int FUN_overlay_21__0219a7c4(void *, Vec3 *);
extern int FUN_overlay_21__02199360(void *, const Vec3 *, int, int);
extern int FUN_overlay_21__021993ec(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02035880(void *, int, int, int, int);
extern void FUN_020358e8(void *, int, int, int);
extern void FUN_02035900(void *, int, int);
extern void FUN_02037924(void *);
extern int FUN_02040d2c(void *, int);

void FUN_overlay_21__0219dae0(unsigned char *self)
{
    Vec3 target;
    unsigned char *actor = *(unsigned char **)(self + 4);
    void *owner = *(void **)(self + 8);
    int aligned;
    if (*(int *)(self + 0xc) == 1) {
        aligned = 0;
        if (FUN_overlay_21__0219a7c4(owner, &target) != 0) aligned = FUN_overlay_21__02199360(actor, &target, 0x200, 1);
        if (*(int *)(self + 0x10) == 30 || (aligned != 0 && ((*(int *)(actor + 0xd8) != 0) ? E1 : E0) == 0)) {
            FUN_02040c0c(actor, 0, 10, 0x1000, 0);
            *(int *)(self + 0xc) = 2;
            *(int *)(self + 0x10) = 0;
        }
    }
    if (*(int *)(self + 0xc) == 2 && *(int *)(self + 0x10) == 15 && *(int *)(actor + 0xe0) == 2) {
        FUN_02035880(actor, 0, 4, 0, 0x1000);
        FUN_020358e8(actor, 0, 4, 0);
        *(int *)(self + 0x18) = 0;
    }
    if (*(int *)(self + 0xc) == 4 && FUN_overlay_21__021993ec(actor, 0x200) != 0) FUN_02037924(owner);
    if (FUN_02040d2c(actor, 0) != 0) {
        switch (*(int *)(self + 0xc)) {
        case 0:
            FUN_02040c0c(actor, 0, 9, 0x1000, 0);
            *(int *)(self + 0xc) = 1;
            break;
        case 2:
            if (*(int *)(self + 0x18) > *(int *)(self + 0x14)) {
                FUN_02040c0c(actor, 0, 9, 0x1000, 0);
                *(int *)(self + 0xc) = 1;
                *(int *)(self + 0x14) += 1;
            } else {
                FUN_02040c0c(actor, 0, 11, 0x1000, 0);
                *(int *)(self + 0xc) = 3;
                if (*(int *)(actor + 0xe0) == 2) FUN_02035900(actor, 0, 4);
            }
            break;
        case 3:
            FUN_02040c0c(actor, 0, 1, 0x1000, 0);
            *(int *)(self + 0xc) = 4;
            break;
        }
        *(int *)(self + 0x10) = 0;
    }
    *(int *)(self + 0x10) += 1;
}
