// flags: -O4,p
#pragma thumb off
extern void FUN_02065774(const void *, void *, unsigned);
extern int FUN_02005898(const char *);
#pragma thumb on
int FUN_overlay_15__0212c3e8(int threshold) {
    unsigned char text[4];
    unsigned char *self = *(unsigned char **)0x0213e864;
    unsigned char *field = self + 8 + 3 * self[20];
    int i;
    if (*field != 0 && *field != 32) return 1;
    FUN_02065774(field, text, 3);
    text[3] = 0;
    for (i = 0; i < 3; i++) {
        if (text[i] != 0) break;
        text[i] = 32;
    }
    if (FUN_02005898((char *)text) >= threshold) return 1;
    return 0;
}
