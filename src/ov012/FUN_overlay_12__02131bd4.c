// flags: -O4,s
extern int *DAT_0213f2d8;
extern void FUN_overlay_12__02131c30(int *);
void *FUN_overlay_12__02131bd4(int *p) {
    int i;
    for (i = 0; i < 8; i++) FUN_overlay_12__02131c30(p + 2 + i);
    if (p == DAT_0213f2d8) DAT_0213f2d8 = 0;
    return p;
}
