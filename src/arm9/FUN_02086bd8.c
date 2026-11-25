// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern void *UNK_0210e24c, *UNK_02108cf4;
extern char *FUN_02086a1c(int), *FUN_020352a4(void *, int), *FUN_020352c0(void *);
extern int FUN_02051bd4(void *, int), FUN_02051c10(void *), FUN_020375f0(void *);
extern void FUN_020345f0(void *, void *), FUN_02036348(void *, void *, void *), FUN_02037390(int *, void *);

int FUN_02086bd8(int excluded, Vec *position) {
    int best = -1, distance, i, start, count, id, d1, d2;
    char *actor;
    void *manager;
    Vec p, a, b;
    for (i = 0; i <= 3; i++) {
        if (i == excluded) continue;
        actor = FUN_02086a1c(i);
        if (!actor) continue;
        FUN_020345f0(&p, actor + 156);
        FUN_02036348(&a, &p, position);
        FUN_02037390(&d1, &a);
        if (best == -1 || ((distance > d1) ? E1 : E0)) {
            distance = d1;
            best = i;
        }
    }
    manager = UNK_0210e24c;
    start = FUN_02051bd4(manager, 0);
    count = FUN_02051c10(manager);
    for (i = 0; i < count; i++) {
        id = start + i;
        if (id == excluded) continue;
        actor = FUN_020352c0(FUN_020352a4(UNK_02108cf4, id));
        if (!actor) continue;
        if (FUN_020375f0(actor)) continue;
        FUN_02036348(&b, actor + 56, position);
        FUN_02037390(&d2, &b);
        if (best == -1 || ((distance > d2) ? E1 : E0)) {
            best = id;
            distance = d2;
        }
    }
    return best;
}
