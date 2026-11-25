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
extern void FUN_overlay_15__021324d8(void *);

void FUN_overlay_15__0213244c(void *task) {
    int x, y, i;
    FUN_overlay_15__02135a54(DAT_0213e8cc.sprites[3], 0, &x, &y);
    x += 8;
    if (x < 152 || x > 256) {
        for (i = 3; i < 5; i++) {
            FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
        }
        return;
    }
    x = 152;
    for (i = 3; i < 5; i++) {
        FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, x, DAT_0213a6ce[i].y);
    }
    FUN_overlay_15__0213743c(task, FUN_overlay_15__021324d8);
}
