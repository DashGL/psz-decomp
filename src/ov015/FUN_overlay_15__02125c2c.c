// flags: -O4,p
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__02126314(int, int, int);
extern void FUN_overlay_15__0212659c(void);
extern void FUN_overlay_15__0213743c(void *, void *);
extern void FUN_overlay_15__02125c8c(void);
extern unsigned char *DAT_0213e7dc;
void FUN_overlay_15__02125c2c(void *task) {
    int x, y;
    FUN_overlay_15__02135a54(*(void **)(DAT_0213e7dc + 0xfc), 0, &x, &y);
    y -= 12;
    if (y > 170) {
        FUN_overlay_15__02126314(DAT_0213e7dc[0x11d], 4, y);
        return;
    }
    FUN_overlay_15__02126314(DAT_0213e7dc[0x11d], 4, 170);
    FUN_overlay_15__0212659c();
    FUN_overlay_15__0213743c(task, (void *)FUN_overlay_15__02125c8c);
}
