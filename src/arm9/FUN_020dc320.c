// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020dad04(void);
extern char *FUN_020dac74(int);
extern int FUN_0202e358(char *);
extern int FUN_020dc3d4(char *);
extern int FUN_020dc414(char *);
extern int FUN_020dc48c(void);
extern int FUN_020dc4ac(char *);
extern int FUN_020dc504(char *);
extern int FUN_020dc518(void);
extern void FUN_020df62c(void);
extern void FUN_020df594(void);

int FUN_020dc320(void) {
    int r5 = FUN_020dad04();
    char *r4 = FUN_020dac74(0x10);
    if (FUN_0202e358(r4) == 9) {
        switch (r5) {
        case 10:
            r5 = FUN_020dc3d4(r4);
            break;
        case 12:
            r5 = FUN_020dc414(r4);
            break;
        case 13:
            r5 = FUN_020dc48c();
            break;
        case 14:
            r5 = FUN_020dc4ac(r4);
            break;
        case 15:
            r5 = FUN_020dc504(r4);
            break;
        case 11:
            r5 = FUN_020dc518();
            break;
        }
    } else {
        switch (r5) {
        case 15:
            r5 = FUN_020dc504(r4);
            break;
        case 11:
            r5 = FUN_020dc518();
            break;
        case 14:
            FUN_020df62c();
            FUN_020df594();
        default:
            r5 = 11;
            *(r4 + ((unsigned char)r4[0xd13] << 2) + 0x444) = 2;
            break;
        }
    }
    return r5;
}
