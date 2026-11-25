// flags: -O4,p
extern void **DAT_0213e7e0;
extern unsigned int *FUN_overlay_15__0213587c(void *, int);
extern void FUN_overlay_15__02127468(int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__021277a4(void *);
void FUN_overlay_15__02127758(void *task) {
    volatile int x;
    volatile int y;
    unsigned int packed = *FUN_overlay_15__0213587c(DAT_0213e7e0[16], 0);
    int ny;
    x = (packed & 0x01ff0000) >> 16;
    ny = packed & 0xff;
    y = ny;
    ny += 12;
    y = ny;
    FUN_overlay_15__02127468(4, ny);
    if (y >= 192) {
        FUN_overlay_15__0213743c(task, FUN_overlay_15__021277a4);
    }
}
