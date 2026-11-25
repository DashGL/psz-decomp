// flags: -O4,p
extern void *DAT_0213f2bc;
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__021299ac(void *p) {
    if (DAT_0213f2bc == p) DAT_0213f2bc = 0;
    FUN_overlay_12__02131dd4(p);
    FUN_020ba940(p);
    return p;
}
