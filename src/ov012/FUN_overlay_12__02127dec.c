// flags: -O4,s
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__02126340(void *, void *);
extern void *FUN_overlay_12__02126fd8(void *, void *);
void *FUN_overlay_12__02127dec(char *self, int mode) {
    void *p;
    switch (mode) {
    case 0:
        p = FUN_020ba894(32);
        if (p) p = FUN_overlay_12__02126340(p, self + 20);
        return p;
    case 1:
        p = FUN_020ba894(40);
        if (p) p = FUN_overlay_12__02126fd8(p, self + 20);
        return p;
    }
    return 0;
}
