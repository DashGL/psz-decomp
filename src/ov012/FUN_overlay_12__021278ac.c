// flags: -O4,s
extern char *FUN_02086e3c(void);
extern void *FUN_020b00d0(void *, int);
extern int FUN_overlay_12__02127948(void *, void *);
extern int FUN_02089928(void *, int), FUN_0204dbf0(void *, int, int);
int FUN_overlay_12__021278ac(int *self) {
    void *item;
    char *mgr;
    int stat;
    if (self[6] < 0 || self[5] < 0) return 0;
    mgr = FUN_02086e3c();
    item = FUN_020b00d0(mgr + 16, self[5]);
    switch (self[6]) {
    case 0: stat = 1; break;
    case 1: stat = 2; break;
    case 2: stat = 3; break;
    case 3: stat = 4; break;
    default: stat = 0; break;
    }
    if (!item) return 0;
    if (!FUN_overlay_12__02127948(self, item)) return 0;
    if (!stat) return 0;
    self[7] = FUN_02089928(item, stat);
    if (!FUN_0204dbf0(item, stat, -1)) return 0;
    self[8] = FUN_02089928(item, stat);
    return 1;
}
