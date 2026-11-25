// flags: -O4,p
extern unsigned int **DAT_overlay_15__0213e7e0;
extern void FUN_overlay_15__02127468(int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__02126e78(void *);
void FUN_overlay_15__02126e20(void *task) {
    volatile int x;
    volatile int y;
    unsigned int packed = *DAT_overlay_15__0213e7e0[7];
    int ny;
    x = (packed & 0x01ff0000) >> 16;
    ny = packed & 0xff;
    y = ny;
    ny -= 12;
    y = ny;
    if (ny > 99) {
        FUN_overlay_15__02127468(1, ny);
        return;
    }
    FUN_overlay_15__02127468(1, 99);
    FUN_overlay_15__02127468(2, 192);
    FUN_overlay_15__0213743c(task, FUN_overlay_15__02126e78);
}
