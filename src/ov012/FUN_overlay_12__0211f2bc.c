// flags: -O4,p
extern void *DAT_0213ec84;
extern void FUN_overlay_12__02120760(void *);
extern void *FUN_020b3074(void *);
void *FUN_overlay_12__0211f2bc(char *p) {
    FUN_overlay_12__02120760(p);
    if (DAT_0213ec84 == p) DAT_0213ec84 = 0;
    FUN_020b3074(p + 40);
    return p;
}
