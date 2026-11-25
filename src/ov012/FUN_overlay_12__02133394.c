// flags: -O4,p
extern void *DAT_0213f2e0;
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__02133394(void *p) {
    if (p == DAT_0213f2e0) DAT_0213f2e0 = 0;
    FUN_overlay_12__02131dd4(p);
    FUN_020ba940(p);
    return p;
}
