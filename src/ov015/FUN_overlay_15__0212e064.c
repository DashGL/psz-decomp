// flags: -O4,s
extern unsigned char *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__0212dfe0(void);
#pragma thumb off
extern int FUN_0205c700(int, int);
#pragma thumb on
extern struct {
    unsigned char mode;
    unsigned char pad1;
    unsigned char sub;
    unsigned char pad2;
    unsigned short pos;
} DAT_0213e86c;
extern const unsigned char DAT_0213a4a0[];
void FUN_overlay_15__0212e064(void) {
    unsigned char *flags;
    int index;
    if ((unsigned char)(DAT_0213e86c.mode + 245) <= 2) {
        FUN_overlay_15__0212dfe0();
        return;
    }
    flags = FUN_overlay_15__021318ac();
    index = FUN_0205c700(DAT_0213e86c.pos, 29) + DAT_0213e86c.sub;
    switch (index) {
    case 2:
        if (flags[245]) DAT_0213e86c.mode = 2;
        else DAT_0213e86c.mode = 3;
        break;
    case 6:
        if (flags[246]) DAT_0213e86c.mode = 7;
        else DAT_0213e86c.mode = 8;
        break;
    default:
        DAT_0213e86c.mode = DAT_0213a4a0[index];
        break;
    }
    FUN_overlay_15__0212dfe0();
}
