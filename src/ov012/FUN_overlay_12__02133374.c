// flags: -O4,p
extern void *DAT_0213f2e0;
extern void *FUN_overlay_12__02131dd4(void *);
void *FUN_overlay_12__02133374(void *p) {
    if (p == DAT_0213f2e0) DAT_0213f2e0 = 0;
    FUN_overlay_12__02131dd4(p);
    return p;
}
