// flags: -O4,p
extern unsigned char *DAT_overlay_15__0213e7dc;
extern unsigned int *FUN_overlay_15__0213587c(void *, int);
extern void FUN_overlay_15__02126314(int, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__02126960(void *);
void FUN_overlay_15__02126908(void *task) {
    volatile int x;
    volatile int y;
    unsigned int packed = *FUN_overlay_15__0213587c(*(void **)(DAT_overlay_15__0213e7dc + 0xfc), 0);
    int ny;
    x = (packed & 0x01ff0000) >> 16;
    ny = packed & 0xff;
    y = ny;
    ny += 12;
    y = ny;
    FUN_overlay_15__02126314(DAT_overlay_15__0213e7dc[0x11d], 4, ny);
    if (y >= 192) {
        FUN_overlay_15__0213743c(task, FUN_overlay_15__02126960);
    }
}
