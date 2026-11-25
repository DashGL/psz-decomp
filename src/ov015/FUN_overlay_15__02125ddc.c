// flags: -O4,p
typedef struct { unsigned short x, y; } Pt;
extern unsigned char *DAT_0213e7dc;
extern const unsigned short DAT_0213a81c[];
extern const Pt DAT_02139e68[], DAT_02139e2c[], DAT_02139e40[], DAT_02139e28[], DAT_02139e48[], DAT_02139e58[], DAT_02139e4c[], DAT_02139e5c[];
extern const unsigned char *DAT_0213abf8[];
extern const unsigned char DAT_0213a0cc[], DAT_02139e1c[];
extern int FUN_overlay_15__02136b28(const void *);
extern void FUN_overlay_15__021363a4(const Pt *, const Pt *, unsigned short *);
extern void FUN_overlay_15__021264a8(int), FUN_overlay_15__0212659c(void), FUN_overlay_15__02125fb8(void), FUN_overlay_15__02125fe0(void);

void FUN_overlay_15__02125ddc(void) {
    unsigned short rect[4];
    int i;
    DAT_0213e7dc[0x11c] = 0;
    if (!FUN_overlay_15__02136b28(DAT_0213a81c)) return;
    for (i = 0; i < 47; ++i) {
        FUN_overlay_15__021363a4(&DAT_02139e68[i], DAT_02139e2c, rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)DAT_0213e7dc[0x11e] != i) return;
            DAT_0213e7dc[0x11c] = DAT_0213abf8[DAT_0213e7dc[0x11d]][i];
            if (DAT_0213e7dc[0x11d] == 1) FUN_overlay_15__021264a8(0);
            DAT_0213e7dc[0x121] = i;
            FUN_overlay_15__0212659c();
            return;
        }
    }
    for (i = 2; i < 4; ++i) {
        FUN_overlay_15__021363a4(&DAT_02139e48[i], &DAT_02139e58[i], rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)DAT_0213e7dc[0x11e] != i + 47) return;
            DAT_0213e7dc[0x11c] = DAT_0213a0cc[i];
            if (DAT_0213e7dc[0x11d] == 1) FUN_overlay_15__021264a8(0);
            DAT_0213e7dc[0x121] = i + 47;
            FUN_overlay_15__0212659c();
            return;
        }
    }
    for (i = 0; i < 2; ++i) {
        FUN_overlay_15__021363a4(&DAT_02139e40[i], DAT_02139e28, rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)DAT_0213e7dc[0x11e] != i + 51) return;
            DAT_0213e7dc[0x11c] = DAT_02139e1c[i];
            DAT_0213e7dc[0x121] = i + 51;
            FUN_overlay_15__0212659c();
            return;
        }
    }
    FUN_overlay_15__021363a4(DAT_02139e48, DAT_02139e58, rect);
    if (FUN_overlay_15__02136b28(rect)) {
        if ((signed char)DAT_0213e7dc[0x11e] != 47) return;
        FUN_overlay_15__02125fb8();
        DAT_0213e7dc[0x121] = 47;
        FUN_overlay_15__0212659c();
        return;
    }
    FUN_overlay_15__021363a4(DAT_02139e4c, DAT_02139e5c, rect);
    if (FUN_overlay_15__02136b28(rect)) {
        if ((signed char)DAT_0213e7dc[0x11e] != 48) return;
        FUN_overlay_15__02125fe0();
        DAT_0213e7dc[0x121] = 48;
        FUN_overlay_15__0212659c();
    }
}
