// flags: -O4,p
typedef struct { unsigned char b[4]; } Str4;
extern const Str4 DAT_0213a344;
extern unsigned char *DAT_0213e864;
extern void FUN_overlay_15__021320a8(const unsigned char *, unsigned char *);
extern void FUN_overlay_15__02127e24(int *, int *);
extern int FUN_020ea1ec(const unsigned char *);
int FUN_overlay_15__0212c708(void)
{
    Str4 limit = DAT_0213a344;
    int mode;
    unsigned char address[4];
    unsigned char *p;
    int group, digit, seenZero, bit;
    for (group = 0; group < 4; group++) {
        p = DAT_0213e864 + 8 + group * 3;
        if (p[0] == ' ') continue;
        for (digit = 0; digit < 3; digit++) {
            if (p[digit] > limit.b[digit]) return 0;
            if (p[digit] < limit.b[digit]) break;
        }
    }
    FUN_overlay_15__021320a8(DAT_0213e864 + 8, address);
    FUN_overlay_15__02127e24(&mode, 0);
    if (mode == 1) {
        seenZero = 0;
        for (group = 0; group < 4; group++) {
            for (bit = 0; bit < 8; bit++) {
                if (seenZero) {
                    if (address[group] & (1 << (7 - bit))) return 0;
                } else {
                    if (!(address[group] & (1 << (7 - bit)))) seenZero = 1;
                }
            }
        }
        return 1;
    }
    if (FUN_020ea1ec(address)) return 1;
    return 0;
}
