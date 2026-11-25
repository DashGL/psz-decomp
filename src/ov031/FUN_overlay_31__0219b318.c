// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec3;
typedef struct { int v; } Fx;
extern void FUN_overlay_31__0219b2a4(void *);
extern const Vec3 DAT_0219cf40, DAT_0219cf34;
extern const int DAT_0219cf0c[], DAT_0219cf24;
extern int DAT_020fc988;
extern void FUN_02044570(void *, int, int);
extern void FUN_02037558(void *);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_020bf680(void *, const int *, int);
extern void *FUN_02034b78(void);
extern int FUN_020350d0(void *, const void *);
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf3c(void *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern int FUN_0205c86c(const Vec3 *);
extern void FUN_020bc610(int *, const Fx *, const Fx *);
extern void FUN_overlay_31__0219b488(Vec3 *, const Vec3 *, const int *);
extern void FUN_0203647c(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02037ff0(void *, const Vec3 *);
extern void FUN_overlay_31__0219ba38(void *);
extern void FUN_overlay_31__0219bfcc(void *, const int *);

void FUN_overlay_31__0219b318(unsigned char *actor) {
    int request[9];
    Vec3 pos, diff, clamped, scaled;
    int center[2];
    Fx distance, radius;
    int ratio, i;
    void *manager;
    unsigned char *target;

    if (((*(unsigned int *)(actor + 0xd4) & 2) ? E1 : E0) != 0) return;
    *(unsigned int *)(actor + 0xd4) |= 2;
    FUN_overlay_31__0219b2a4(actor);
    *(Vec3 *)(actor + 0x38) = DAT_0219cf40;
    FUN_02044570(actor, 0, 1);
    FUN_02037558(actor);
    FUN_02043ea4(actor, 1, 0);
    FUN_02043ea4(actor, 2, 1);
    FUN_02043ea4(actor, 3, 0);
    center[0] = DAT_0219cf0c[10];
    center[1] = DAT_0219cf0c[12];
    FUN_020bf680(request, center, 0x5e66);
    if (*(int *)(actor + 0x140) == -1) {
        manager = FUN_02034b78();
        if (manager != 0) *(int *)(actor + 0x140) = FUN_020350d0(manager, request);
    }
    for (i = 0; i <= 3; i++) {
        target = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (target != 0 && FUN_0203bf3c(target) != 0) {
            const Vec3 *tpos = (const Vec3 *)(target + 0x9c);
            pos.x = tpos->x;
            pos.y = tpos->y;
            pos.z = tpos->z;
            FUN_02036348(&diff, &pos, &DAT_0219cf34);
            diff.y = DAT_020fc988;
            distance.v = FUN_0205c86c(&diff);
            radius.v = 0x5e66;
            if (((radius.v > distance.v) ? E1 : E0) != 0) {
                FUN_020bc610(&ratio, &radius, &distance);
                FUN_overlay_31__0219b488(&scaled, &diff, &ratio);
                FUN_0203647c(&clamped, &DAT_0219cf34, &scaled);
                pos = clamped;
                FUN_02037ff0(target, &pos);
            }
        }
    }
    for (i = 0; i < 80; i++) FUN_overlay_31__0219ba38(actor);
    FUN_overlay_31__0219bfcc(*(void **)(actor + 0x10), &DAT_0219cf24);
}
