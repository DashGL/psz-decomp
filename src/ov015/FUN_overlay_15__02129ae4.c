// flags: -O4,p
extern unsigned char DAT_0213e838;
extern int FUN_overlay_15__02124eb4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__02129b18(void);
void FUN_overlay_15__02129ae4(void) {
    switch (FUN_overlay_15__02124eb4()) {
    case 0:
        FUN_overlay_15__02132190(7);
        break;
    case 1:
        FUN_overlay_15__02132190(6);
        DAT_0213e838 = 1;
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__02129b18);
}
