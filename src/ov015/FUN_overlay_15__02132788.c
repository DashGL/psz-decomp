// flags: -O4,p
struct G_2680 {
    void *unk;
    void **sprites;
};
struct Pos_2680 {
    unsigned short x;
    unsigned short y;
};
extern struct G_2680 DAT_0213e8cc;
extern const struct Pos_2680 DAT_0213a6ce[];
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__0213280c(void *);

void FUN_overlay_15__02132788(void *task) {
    int x, y, i;
    FUN_overlay_15__02135a54(DAT_0213e8cc.sprites[1], 0, &x, &y);
    x -= 8;
    if (x > 32) {
        for (i = 1; i < 5; i++) {
            FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
        }
        return;
    }
    x = 32;
    for (i = 1; i < 5; i++) {
        FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
    }
    FUN_overlay_15__0213743c(task, FUN_overlay_15__0213280c);
}
