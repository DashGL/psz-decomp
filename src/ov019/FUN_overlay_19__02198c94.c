// flags: -O4,s
extern void *DAT_02108d04;
extern void *DAT_02108cf4;
extern int FUN_0208546c(void);
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
void *FUN_overlay_19__02198c94(void *unused, int index) {
    void *p;
    if (index == -1) return 0;
    { int cur = FUN_0208546c(); if (cur == index) p = DAT_02108d04; else p = FUN_02039200(FUN_020352a4(DAT_02108cf4, index)); }
    if (!p) return 0;
    if (!FUN_0203bf48(p)) p = 0;
    return p;
}
