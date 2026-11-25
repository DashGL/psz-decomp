// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int FUN_02041474(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_overlay_19__0219c99c(void *);
extern void FUN_02037924(void *);
extern int FUN_overlay_19__021983a8(void *);
extern void FUN_overlay_19__0219c9cc(void *);
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
extern void FUN_overlay_19__021987c4(void *, const Vec3 *);
extern int FUN_overlay_19__021988f8(void *);
extern void FUN_02037254(void *, int, int, const Vec3 *, int);
void FUN_overlay_19__0219c838(unsigned char *self) {
    Vec3 direction, position, copy;
    unsigned char *actor = *(unsigned char **)(self + 4);
    unsigned char *owner = *(unsigned char **)(self + 8);
    unsigned char *target;
    if (FUN_02041474(actor, 0) != 0) {
        *(unsigned int *)(self + 0xc) += 1;
        switch (*(unsigned int *)(self + 0xc)) {
        case 4: FUN_02040c0c(*(void **)(self + 4), 0, 12, 0x1000, 0); break;
        case 5: FUN_overlay_19__0219c99c(self); break;
        case 9:
            if (*(int *)(self + 0x10) == 1) FUN_02040c0c(*(void **)(self + 4), 0, 14, 0x1000, 0);
            else FUN_02040c0c(*(void **)(self + 4), 0, 13, 0x1000, 0);
            break;
        case 10:
            *(int *)(actor + 0x180) = 0;
            FUN_02040c0c(*(void **)(self + 4), 0, 15, 0x1000, 0);
            break;
        case 11: FUN_02040c0c(*(void **)(self + 4), 0, 16, 0x1000, 0); break;
        case 12: FUN_02037924(*(void **)(self + 8)); break;
        }
    }
    if (*(unsigned int *)(self + 0xc) > 12) FUN_02037924(*(void **)(self + 8));
    if (FUN_overlay_19__021983a8(actor) == 1) FUN_overlay_19__0219c9cc(self);
    if (*(unsigned int *)(self + 0xc) < 5) {
        direction.x = 0;
        direction.y = 0;
        direction.z = -0x1000;
        target = FUN_02039200(FUN_020352a4(DAT_02108cf4, *(int *)(owner + 0x68)));
        if (target != 0 && FUN_0203bf48(target) != 0) {
            const Vec3 *tv = (const Vec3 *)(target + 0x9c);
            copy.x = tv->x;
            copy.y = tv->y;
            copy.z = tv->z;
            direction = copy;
        }
        FUN_overlay_19__021987c4(actor, &direction);
    }
    if (FUN_overlay_19__021988f8(actor) == 1) {
        position = *(const Vec3 *)(actor + 0x38);
        FUN_02037254(actor, 29, 2, &position, 1);
    }
}
