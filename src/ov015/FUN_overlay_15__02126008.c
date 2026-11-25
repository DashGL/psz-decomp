// flags: -O4,p
extern unsigned char *DAT_overlay_15__0213e7dc;
extern const unsigned short DAT_overlay_15__0213a81c[], DAT_overlay_15__02139e68[][2], DAT_overlay_15__02139e2c[];
extern const unsigned short DAT_overlay_15__02139e48[][2], DAT_overlay_15__02139e58[][2], DAT_overlay_15__02139e40[][2], DAT_overlay_15__02139e28[];
extern int FUN_overlay_15__02136a08(const unsigned short *);
extern void FUN_overlay_15__021363a4(const unsigned short *, const unsigned short *, unsigned short *);
extern void FUN_overlay_15__0212614c(int);
extern void FUN_overlay_15__02132190(int);
void FUN_overlay_15__02126008(void) {
    unsigned short rect[4];
    int i;
    if (!FUN_overlay_15__02136a08(DAT_overlay_15__0213a81c)) goto none;
    for (i = 0; i < 47; i++) {
        FUN_overlay_15__021363a4(DAT_overlay_15__02139e68[i], DAT_overlay_15__02139e2c, rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)DAT_overlay_15__0213e7dc[0x11e] != i) goto none;
            FUN_overlay_15__0212614c(i);
            goto reset;
        }
    }
    for (i = 2; i < 4; i++) {
        FUN_overlay_15__021363a4(DAT_overlay_15__02139e48[i], DAT_overlay_15__02139e58[i], rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)DAT_overlay_15__0213e7dc[0x11e] != i + 47) goto none;
            FUN_overlay_15__0212614c(i + 47);
            if (i != 3) return;
            DAT_overlay_15__0213e7dc[0x122]++;
            if (DAT_overlay_15__0213e7dc[0x122] < 40) return;
            if (!DAT_overlay_15__0213e7dc[0x123]) {
                FUN_overlay_15__02132190(9);
                ((signed char *)DAT_overlay_15__0213e7dc)[0x11e] = -1;
                return;
            }
            DAT_overlay_15__0213e7dc[0x11c] = 128;
            DAT_overlay_15__0213e7dc[0x122] -= 7;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(DAT_overlay_15__02139e40[i], DAT_overlay_15__02139e28, rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)DAT_overlay_15__0213e7dc[0x11e] != i + 51) goto none;
            FUN_overlay_15__0212614c(i + 51);
            goto reset;
        }
    }
none:
    FUN_overlay_15__0212614c(-1);
reset:
    DAT_overlay_15__0213e7dc[0x122] = 0;
}
