// flags: -O4,p
extern void **DAT_0213e7d0;
extern void FUN_overlay_15__02125570(void);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);

void FUN_overlay_15__021254e0(int left, int right, int top, int bottom) {
    int id = 6;
    int i;
    FUN_overlay_15__02125570();
    for (i = 0; i < 4; i++, id++) {
        DAT_0213e7d0[i] = FUN_overlay_15__02135b14(0, id, 1);
        FUN_overlay_15__02135a10(DAT_0213e7d0[i], -1, 1);
    }
    FUN_overlay_15__0213596c(DAT_0213e7d0[0], -1, left, top);
    FUN_overlay_15__0213596c(DAT_0213e7d0[1], -1, right, top);
    FUN_overlay_15__0213596c(DAT_0213e7d0[2], -1, left, bottom);
    FUN_overlay_15__0213596c(DAT_0213e7d0[3], -1, right, bottom);
}
