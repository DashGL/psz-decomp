// flags: -O4,p
extern void FUN_overlay_15__02125570(void);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern const unsigned char DAT_02139dfc[][2];
extern void **DAT_0213e7d0;

void FUN_overlay_15__0212546c(int kind, int left, int right, int y) {
    int i;
    FUN_overlay_15__02125570();
    for (i = 0; i < 2; i++) {
        DAT_0213e7d0[i] = FUN_overlay_15__02135b14(0, DAT_02139dfc[kind][i], 1);
        FUN_overlay_15__02135a10(DAT_0213e7d0[i], -1, 1);
    }
    FUN_overlay_15__0213596c(DAT_0213e7d0[0], -1, left, y);
    FUN_overlay_15__0213596c(DAT_0213e7d0[1], -1, right, y);
}
