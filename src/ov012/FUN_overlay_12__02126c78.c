// flags: -O4,s
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *, int);
extern int FUN_0203a1fc(void *), FUN_overlay_12__02126ea8(void *, void *);
int FUN_overlay_12__02126c78(void *s) {
    char *bag = FUN_02086e3c() + 16;
    int i, count = *(short *)(bag + 8);
    void *item;
    for (i = 0; i < count; i++) {
        item = FUN_020b00ac(bag, i);
        if (!FUN_0203a1fc(item) && FUN_overlay_12__02126ea8(s, item)) return 1;
    }
    return 0;
}
