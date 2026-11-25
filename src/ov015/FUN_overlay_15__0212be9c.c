// flags: -O4,p
extern unsigned char *DAT_overlay_15__0213e860;
extern void FUN_overlay_15__02127e24(int *, int *);
extern int FUN_overlay_15__02125214(int, int, int);
extern int FUN_overlay_15__02137084(const void *, int);

int FUN_overlay_15__0212be9c(void)
{
    int mode, kind, length, i;
    FUN_overlay_15__02127e24(&mode, &kind);
    if (kind == 1) FUN_overlay_15__02125214(53, -1, 0);
    FUN_overlay_15__02127e24(&mode, &kind);
    if (mode == 0) {
        if (DAT_overlay_15__0213e860[8] != 0) return 1;
        return 0;
    }
    if (kind == 1 && !DAT_overlay_15__0213e860[8]) return 0;
    length = FUN_overlay_15__02137084(DAT_overlay_15__0213e860 + 8, 32);
    switch (length) {
    case 0:
    case 5:
    case 13:
    case 16:
        return 1;
    case 10:
    case 26:
    case 32:
        for (i = 0; i < length; i++) {
            unsigned int c = (DAT_overlay_15__0213e860 + 8)[i];
            if (c >= '0' && c <= '9') continue;
            if (c >= 'A' && c <= 'F') continue;
            if (c >= 'a' && c <= 'f') continue;
            return 0;
        }
        return 1;
    default:
        return 0;
    }
}
