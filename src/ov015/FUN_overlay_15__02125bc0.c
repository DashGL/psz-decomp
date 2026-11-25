// flags: -O4,p
extern unsigned char *DAT_overlay_15__0213e7dc;
extern void FUN_overlay_15__02126314(unsigned char, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__02125c2c(void *);
void FUN_overlay_15__02125bc0(void *task) {
    volatile int x;
    volatile int y;
    unsigned char *base = DAT_overlay_15__0213e7dc;
    unsigned int packed = **(unsigned int **)(base + 0xc0);
    int ny;
    x = (packed & 0x01ff0000) >> 16;
    ny = packed & 0xff;
    y = ny;
    ny -= 12;
    y = ny;
    if (ny > 147) {
        FUN_overlay_15__02126314(base[0x11d], 3, ny);
        return;
    }
    FUN_overlay_15__02126314(base[0x11d], 3, 147);
    FUN_overlay_15__02126314(DAT_overlay_15__0213e7dc[0x11d], 4, 192);
    FUN_overlay_15__0213743c(task, FUN_overlay_15__02125c2c);
}
