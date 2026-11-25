// flags: -O4,p
extern int FUN_overlay_15__02124eb4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02124edc(int);
extern void FUN_020e9ebc(void *);
extern void FUN_overlay_15__021294f8(void);
extern void FUN_overlay_15__02129390(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern unsigned char DAT_0213e828[2];
struct Id_02129320 {
    unsigned long long val;
    unsigned int rest[3];
};
void FUN_overlay_15__02129320(void) {
    struct Id_02129320 identity;
    int choice = FUN_overlay_15__02124eb4();
    switch (choice) {
    case 0:
        FUN_overlay_15__02132190(7);
        break;
    case 1:
        FUN_020e9ebc(&identity);
        if (DAT_0213e828[0] && identity.val == 0) {
            FUN_overlay_15__02132190(9);
            FUN_overlay_15__02124edc(-1);
            return;
        }
        FUN_overlay_15__02132190(6);
        FUN_overlay_15__021294f8();
        DAT_0213e828[1] = 1;
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__02129390);
}
