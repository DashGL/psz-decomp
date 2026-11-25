// flags: -O4,s
typedef struct { int a, b, c, d; } Item;
extern char DAT_0211a3b8[], DAT_0211a3c4[];
extern char *FUN_02086e3c(void), *FUN_020870c4(void *), *FUN_02031cb8(void *, int, int), *FUN_020942dc(void *, int);
extern void *FUN_02031a74(void);
extern void FUN_02094338(void *, void *), FUN_020783b0(void *);
extern int FUN_020b028c(void *, void *, int), FUN_02078620(void *, int);

enum { E0 = 0, E1 = 1 };

int FUN_02078504(void) {
    char *pending, *mission, *profile, *reward, *list;
    unsigned count, i;
    int id;
    Item copy, item;
    if (!((*(int *)(FUN_020870c4(FUN_02086e3c()) + 3376) >= 0) ? E1 : E0)) return 0;
    pending = FUN_020870c4(FUN_02086e3c()) + 3368;
    mission = FUN_02031cb8(FUN_02031a74(), *(int *)(pending + 8), *(signed char *)(pending + 12));
    if (!mission) return 0;
    profile = FUN_020870c4(FUN_02086e3c());
    reward = FUN_020942dc(mission, *(signed char *)(pending + 13));
    if (*(int *)reward) {
        *(int *)(profile + 52) += *(int *)reward;
        if (*(int *)(profile + 52) > 99999999) *(int *)(profile + 52) = 99999999;
    }
    list = *(char **)(reward + 4);
    if (list) {
        count = *(unsigned char *)(reward + 8);
        for (i = 0; i < count; i++) {
            FUN_02094338(&item, list + 12 * i);
            copy = item;
            FUN_020b028c(FUN_02086e3c() + 16, &copy, 0);
        }
    }
    id = *(short *)(mission + 46);
    if (FUN_02078620(profile + 3404, id)) *(unsigned *)(profile + 3404 + 4 * (id / 32)) |= 1u << (id % 32);
    FUN_020783b0(profile + 3368);
    *(int *)(profile + 3388) = 0;
    *(short *)DAT_0211a3b8 = 0;
    FUN_020783b0(DAT_0211a3c4);
    return 1;
}
