// flags: -O4,p
extern int FUN_overlay_15__02137084(const void *, int);
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern void FUN_overlay_15__02136208(void *, int, int, int, int, const unsigned short *, int);
extern unsigned char *DAT_overlay_15__0213e858[];

void FUN_overlay_15__0212b380(int entry, int row)
{
    unsigned char *owner = DAT_overlay_15__0213e858[1];
    int offset = entry * 42;
    int length = FUN_overlay_15__02137084(*(unsigned char **)owner + offset, 32);
    int y = row * 28, i, count;
    unsigned short text[17];
    owner = DAT_overlay_15__0213e858[1];
    if (entry >= owner[0x51]) return;
    if (length <= 16) y += 6;
    FUN_020656b8(text, 0, 34);
    count = length <= 16 ? length : 16;
    for (i = 0; i < count; i++) text[i] = (*(unsigned char **)DAT_overlay_15__0213e858[1])[offset + i];
    FUN_overlay_15__02136208(*(void **)(DAT_overlay_15__0213e858[1] + 12), 10, y, 2, 10, text, 1);
    if (length > 16) {
        FUN_020656b8(text, 0, 34);
        length -= 16;
        for (i = 0; i < length; i++) text[i] = (*(unsigned char **)DAT_overlay_15__0213e858[1])[offset + i + 16];
        FUN_overlay_15__02136208(*(void **)(DAT_overlay_15__0213e858[1] + 12), 10, y + 12, 2, 10, text, 1);
    }
}
