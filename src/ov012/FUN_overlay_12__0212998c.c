// flags: -O4,p
extern void *DAT_0213f2bc;
extern void *FUN_overlay_12__02131dd4(void *);
void *FUN_overlay_12__0212998c(void *p) {
    if (DAT_0213f2bc == p) DAT_0213f2bc = 0;
    FUN_overlay_12__02131dd4(p);
    return p;
}
