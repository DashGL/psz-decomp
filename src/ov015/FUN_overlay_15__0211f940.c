// flags: -O4,p
extern unsigned char DAT_0213d020[];
extern int FUN_overlay_15__021206a0(const void *, const void *, int);
int FUN_overlay_15__0211f940(unsigned int value, const void *expected) {
    int result = 0;
    int i;
    int any = 0;
    for (i = 0; i < 6; i++) {
        if (DAT_0213d020[i] != 0) {
            any = 1;
            break;
        }
    }
    if (any) {
        if (FUN_overlay_15__021206a0(DAT_0213d020, expected, 6) != 0) result = 1;
    } else if (value != 4096) {
        result = 2;
    }
    return result;
}
