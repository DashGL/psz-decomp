// flags: -O4,p
extern int FUN_overlay_12__021344e4(void);
extern int FUN_overlay_12__021341fc(void);
extern int FUN_overlay_12__0213220c(void);
extern int FUN_020849d4(void *);
extern int FUN_020b025c(void *, void *);
extern int *FUN_overlay_12__021344bc(int);
extern char *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
enum { E0 = 0, E1 = 1 };

int FUN_overlay_12__02134f0c(void *item, int index, int *cost) {
    int total;
    int count = FUN_overlay_12__021344e4();
    int *record;
    if (index < 0 || count <= index) return 0;
    record = FUN_overlay_12__021344bc(index);
    total = (int)((unsigned int)record[4] * (unsigned int)FUN_020849d4(item));
    *cost = total;
    if (((FUN_overlay_12__021341fc() == 4) ? E1 : E0) != 0) {
        int balance = FUN_overlay_12__0213220c();
        if (total <= 0 || balance < total) return 0;
    } else {
        char *player = FUN_020870c4(FUN_02086e3c()) + 44;
        if (total <= 0 || *(int *)(player + 8) < total) return 0;
    }
    if (!FUN_020b025c(FUN_02086e3c() + 16, item)) return 0;
    return 1;
}
