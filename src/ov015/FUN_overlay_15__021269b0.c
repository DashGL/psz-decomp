// flags: -O4,s
extern unsigned char *DAT_overlay_15__0213e7dc;
extern void FUN_overlay_15__02126314(unsigned char, int, int);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *));
extern void FUN_overlay_15__02126a00(void *);
void FUN_overlay_15__021269b0(void *task) {
    volatile int x;
    volatile int y;
    unsigned char *base = DAT_overlay_15__0213e7dc;
    unsigned int packed = **(unsigned int **)(base + 0x90);
    int ny;
    x = (packed & 0x01ff0000) >> 16;
    ny = packed & 0xff;
    y = ny;
    ny += 12;
    y = ny;
    FUN_overlay_15__02126314(base[0x11d], 2, ny);
    if (y >= 192) {
        FUN_overlay_15__0213743c(task, FUN_overlay_15__02126a00);
    }
}
