// flags: -O4,s
typedef struct { unsigned char b[4]; } Head4;
extern int FUN_overlay_12__0212a0c8(const void *), FUN_overlay_12__0212a1a0(const void *), FUN_overlay_12__0212a2a4(const void *), FUN_overlay_12__0212a300(const void *), FUN_020849d4(const void *);
extern void *FUN_020845fc(const unsigned char *);

int FUN_overlay_12__02129fe4(const unsigned int *item)
{
    Head4 header, copy;
    unsigned char *h;
    int value;
    header = *(const Head4 *)item;
    h = header.b;
    switch (header.b[0]) {
    case 0:
        if (h[1] == 17) return FUN_overlay_12__0212a0c8(item);
        return FUN_overlay_12__0212a1a0(item);
    case 1:
        return FUN_overlay_12__0212a2a4(item);
    case 2:
        if (h[3]) return 0;
        return FUN_020845fc(h) != 0;
    case 3:
        return FUN_overlay_12__0212a300(item);
    case 4:
        value = FUN_020849d4(item);
        return value >= 0 && value <= 99999999;
    default:
        {
            unsigned sum = 0, packed, all_ff;
            int i;
            for (i = 0; i < 3; i++) sum += item[i + 1];
            copy = *(const Head4 *)item;
            packed = ((unsigned)copy.b[0] << 24) | ((unsigned)copy.b[1] << 16) | ((unsigned)copy.b[2] << 8) | copy.b[3];
            all_ff = (packed == ~0u);
            return all_ff && sum == 0;
        }
    }
}
