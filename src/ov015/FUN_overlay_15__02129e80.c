// flags: -O4,s
extern unsigned char DAT_0213e840[];
extern int FUN_overlay_15__02124eb4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02129eb8(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
void FUN_overlay_15__02129e80(void) {
    switch (FUN_overlay_15__02124eb4()) {
    case 1:
        DAT_0213e840[1] = 1;
        FUN_overlay_15__02132190(6);
        break;
    case 0:
        DAT_0213e840[1] = 0;
        FUN_overlay_15__02132190(7);
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__02129eb8);
}
