// flags: -O4,s
extern unsigned char DAT_0213e894[];
extern int FUN_overlay_15__02124eb4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02130140(void);
extern void FUN_overlay_15__0212ff68(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
void FUN_overlay_15__0212ff30(void) {
    switch (FUN_overlay_15__02124eb4()) {
    case 0:
        FUN_overlay_15__02132190(7);
        break;
    case 1:
        FUN_overlay_15__02132190(6);
        FUN_overlay_15__02130140();
        DAT_0213e894[2] = 1;
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__0212ff68);
}
