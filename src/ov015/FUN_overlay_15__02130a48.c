// flags: -O4,p
extern unsigned char DAT_0213e8a8;
extern int FUN_overlay_15__02124eb4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__02130a7c(void);
void FUN_overlay_15__02130a48(void) {
    switch (FUN_overlay_15__02124eb4()) {
    case 0:
        FUN_overlay_15__02132190(7);
        break;
    case 1:
        FUN_overlay_15__02132190(6);
        DAT_0213e8a8 = 1;
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__02130a7c);
}
