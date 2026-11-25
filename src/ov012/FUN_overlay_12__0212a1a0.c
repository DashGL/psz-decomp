// flags: -O4,s
extern signed char *FUN_02084568(void *);
typedef struct { unsigned char b[4]; } Header;

int FUN_overlay_12__0212a1a0(int *item) {
    Header head = *(Header *)item;
    signed char *def = FUN_02084568(&head);
    int i, v, special, level, grind;

    if (def) {
        for (i = 1; i < 6; i++) {
            v = 0;
            switch (i) {
            case 1: v = (item[1] & 0x1fc0000) >> 18; break;
            case 2: v = (item[1] & 0x3f800) >> 11; break;
            case 3: v = (item[1] & 0x7f0) >> 4; break;
            case 4: v = ((item[2] & (int)0xfe000000) >> 25) & 0x7f; break;
            case 5: v = (item[2] & 0x1fc0000) >> 18; break;
            }
            if (v < 0 || v > 99) return 0;
        }
        special = (item[2] & 0x3e000) >> 13;
        if (special >= 21) return 0;
        if (special == 15 || special == 19) return 0;
        level = (item[2] & 0xe00) >> 9;
        if (level > 5) return 0;
        if (special != 0 && level == 0) return 0;
        if ((item[1] & 15) >= 4) return 0;
        grind = ((item[1] & (int)0xfe000000) >> 25) & 0x7f;
        if (def[4] < grind || grind > 99) return 0;
        if ((*(unsigned int *)def >> 18) != 0) return 1;
        return 0;
    }
    return 0;
}
