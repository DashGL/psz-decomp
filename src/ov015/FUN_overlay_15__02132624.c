// flags: -O4,p
extern unsigned char DAT_0213e8cc[];
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02132680(void *);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
#define SPRITE (*(void **)(*(char **)(DAT_0213e8cc + 4) + 16))
void FUN_overlay_15__02132624(void *s) {
    int x, y;
    FUN_overlay_15__02135a54(SPRITE, 0, &x, &y);
    x -= 8;
    if (x > 152) FUN_overlay_15__0213596c(SPRITE, -1, x, 33);
    else {
        x = 152;
        FUN_overlay_15__0213596c(SPRITE, -1, x, 33);
        FUN_overlay_15__0213743c(s, FUN_overlay_15__02132680);
    }
}
