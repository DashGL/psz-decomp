// flags: -O4,s
extern unsigned int DAT_0213e6d0[];
extern void *FUN_overlay_12__02131d80(void *, void *, int);
extern int *FUN_overlay_12__0212cbf0(unsigned *);
extern char *FUN_020a0ce8(void);
extern void FUN_overlay_12__0211f17c(void *), FUN_overlay_12__0211f870(void *, int, int, int);
extern int FUN_020a1580(unsigned, void *), FUN_overlay_12__02131fd0(void *, int);
void *FUN_overlay_12__02130e84(unsigned char *self, void *parent) {
    char *mgr;
    int *table, i;
    FUN_overlay_12__02131d80(self, parent, 0);
    *(void **)self = DAT_0213e6d0;
    *(int *)(self + 64) = 0;
    *(int *)(self + 68) = 0;
    *(int *)(self + 72) = 0;
    *(int *)(self + 76) = 0;
    FUN_overlay_12__0211f17c(self + 880);
    *(int *)(self + 896) = 1;
    table = FUN_overlay_12__0212cbf0((unsigned *)(self + 76));
    mgr = FUN_020a0ce8();
    for (i = 0; i < 100; i++) {
        if (FUN_020a1580(i, mgr + 10)) {
            *(int *)(self + 80 + 8 * (*(int *)(self + 68))) = i;
            *(int *)(self + 84 + 8 * (*(int *)(self + 68))) = 1;
            (*(int *)(self + 68))++;
            (*(int *)(self + 72))++;
        } else if (table[i] > 0 && FUN_020a1580(table[i], mgr + 10)) {
            *(int *)(self + 80 + 8 * (*(int *)(self + 68))) = i;
            *(int *)(self + 84 + 8 * (*(int *)(self + 68))) = 0;
            (*(int *)(self + 68))++;
        }
    }
    FUN_overlay_12__0211f870(self + 880, *(int *)(self + 68), 3, 0);
    FUN_overlay_12__02131fd0(self, 1);
    return self;
}
