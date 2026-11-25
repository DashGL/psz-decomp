// flags: -O4,p
extern unsigned char DAT_0213e8cc[];
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__0213253c(void *);
void FUN_overlay_15__021324d8(void *task) {
    int x, y;
    FUN_overlay_15__02135a54((*(void ***)(DAT_0213e8cc + 4))[4], 0, &x, &y);
    x += 8;
    if (x < 176 || x > 256) {
        FUN_overlay_15__0213596c((*(void ***)(DAT_0213e8cc + 4))[4], -1, x, 33);
        return;
    }
    x = 176;
    FUN_overlay_15__0213596c((*(void ***)(DAT_0213e8cc + 4))[4], -1, x, 33);
    FUN_overlay_15__0213743c(task, FUN_overlay_15__0213253c);
}
