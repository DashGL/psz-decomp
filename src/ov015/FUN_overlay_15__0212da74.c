// flags: -O4,p
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern int FUN_overlay_15__02137084(const void *, int);
extern void FUN_overlay_15__02136208(void *, int, int, int, int, const unsigned short *, int);
extern char *DAT_0213e86c[];

void FUN_overlay_15__0212da74(const unsigned char *source, int row)
{
    unsigned short text[17];
    int length, count, i, y;
    FUN_020656b8(text, 0, 34);
    length = FUN_overlay_15__02137084(source, 32);
    count = (length <= 16) ? length : 16;
    for (i = 0; i < count; i++) {
        if (source[i] == ' ')
            text[i] = 0xe01d;
        else
            text[i] = source[i];
    }
    y = row * 29 + 2;
    if (length <= 16)
        y += 5;
    FUN_overlay_15__02136208(*(void **)(DAT_0213e86c[2] + 20), 72, y, 2, 8, text, 1);
    if (length > 16) {
        FUN_020656b8(text, 0, 34);
        length -= 16;
        for (i = 0; i < length; i++) {
            if (source[i + 16] == ' ')
                text[i] = 0xe01d;
            else
                text[i] = source[i + 16];
        }
        y += 12;
        FUN_overlay_15__02136208(*(void **)(DAT_0213e86c[2] + 20), 72, y, 2, 8, text, 1);
    }
}
