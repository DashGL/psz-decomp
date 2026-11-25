// flags: -O4,p
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02137440(int, void *);
extern void FUN_overlay_15__02135820(void *);
extern void FUN_overlay_15__021366dc(void *);

extern struct {
    int unk0;
    void **arr;
} DAT_0213e8cc;

extern struct {
    unsigned short a;
    unsigned short b;
} DAT_0213a6ce[];

void FUN_overlay_15__0213280c(void *task) {
    int x, y;
    int i;
    FUN_overlay_15__02135a54(DAT_0213e8cc.arr[0], 0, &x, &y);
    x -= 8;
    for (i = 0; i < 5; i++) {
        FUN_overlay_15__0213596c(DAT_0213e8cc.arr[i], -1, x, DAT_0213a6ce[i].b);
    }
    if (x <= 470 && x >= 256) {
        FUN_overlay_15__02137440(0, task);
        for (i = 0; i < 5; i++) {
            FUN_overlay_15__02135820(DAT_0213e8cc.arr[i]);
        }
        FUN_overlay_15__021366dc(&DAT_0213e8cc.arr);
    }
}
