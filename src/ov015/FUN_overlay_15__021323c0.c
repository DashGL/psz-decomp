// flags: -O4,p
struct G_22a8 {
    void *unk;
    void **sprites;
};
struct Pos_22a8 {
    unsigned short x;
    unsigned short y;
};
extern struct G_22a8 DAT_0213e8cc;
extern const struct Pos_22a8 DAT_0213a6ce[];
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__0213244c(void *);

void FUN_overlay_15__021323c0(void *task) {
    int x, y, i;
    FUN_overlay_15__02135a54(DAT_0213e8cc.sprites[2], 0, &x, &y);
    x += 8;
    if (x < 104 || x > 256) {
        for (i = 2; i < 5; i++) {
            FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
        }
        return;
    }
    x = 104;
    for (i = 2; i < 5; i++) {
        FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
    }
    FUN_overlay_15__0213743c(task, FUN_overlay_15__0213244c);
}
