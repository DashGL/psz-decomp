// flags: -O4,p
extern unsigned char *DAT_0213e8d4;
extern unsigned char *DAT_a_0213e8d4;
extern void FUN_020535e0(void *);
extern int FUN_02053d84(void (*)(void *));
extern void FUN_overlay_15__02132af8(void *);
extern int FUN_02053dbc(void (*)(void *));
extern void FUN_overlay_15__02137458(int, void *);
extern void FUN_overlay_15__021366dc(void *);
int FUN_overlay_15__02132a50(void) {
    DAT_0213e8d4[0x1b94] = 1;
    FUN_020535e0(DAT_0213e8d4 + 0x13b8);
    if (*(unsigned short *)(DAT_0213e8d4 + 0x13b8) != 2) {
        if (FUN_02053d84(FUN_overlay_15__02132af8) != 2) return 0;
        do {
            FUN_020535e0(DAT_0213e8d4 + 0x13b8);
        } while (*(unsigned short *)(DAT_0213e8d4 + 0x13b8) != 2);
    }
    if (FUN_02053dbc(FUN_overlay_15__02132af8) != 2) return 0;
    if (*(void **)(DAT_0213e8d4 + 0x1b90) != 0) {
        FUN_overlay_15__02137458(0, *(void **)(DAT_0213e8d4 + 0x1b90));
    }
    while (*(volatile unsigned char *)(DAT_0213e8d4 + 0x1b94) != 2) {}
    FUN_overlay_15__021366dc(&DAT_a_0213e8d4);
    return 1;
}
