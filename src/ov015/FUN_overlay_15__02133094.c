// flags: -O4,p
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__0213322c(int);
extern void *FUN_overlay_15__021373d8(int, void *, int, int);
extern void FUN_overlay_15__02137440(int, void *);
struct State {
    void *f00;
    unsigned char pad[0x10];
    void *f14;
    unsigned char pad2[4];
    unsigned char f1c;
};
extern struct State *DAT_0213e8d8;
extern unsigned short DAT_0213a79a[][2];
extern unsigned char DAT_021331ed[];
extern unsigned char DAT_02133119[];

void FUN_overlay_15__02133094(void *task) {
    int x, y;
    int target;
    FUN_overlay_15__02135a54(DAT_0213e8d8->f00, 0, &x, &y);
    y -= 12;
    target = DAT_0213a79a[DAT_0213e8d8->f1c][0];
    if (y > target) {
        FUN_overlay_15__0213322c(y);
        return;
    }
    FUN_overlay_15__0213322c(target);
    if (DAT_0213e8d8->f1c == 5) {
        DAT_0213e8d8->f14 = FUN_overlay_15__021373d8(0, DAT_021331ed, 0, 120);
    } else {
        DAT_0213e8d8->f14 = FUN_overlay_15__021373d8(0, DAT_02133119, 0, 120);
    }
    FUN_overlay_15__02137440(1, task);
}
