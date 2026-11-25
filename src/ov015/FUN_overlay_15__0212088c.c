// flags: -O4,p
typedef struct { unsigned short mask; unsigned char value, padding; } Flag_088c;
#pragma thumb off
extern void FUN_020654dc(const void *, void *, unsigned int);
#pragma thumb on
extern const Flag_088c DAT_0213a8b8[];

void FUN_overlay_15__0212088c(const unsigned char *source, unsigned char *out) {
    int i, count, mode;
    *(unsigned int *)out = *(const unsigned short *)(source + 10);
    FUN_020654dc(source + 12, out + 4, 32);
    *(unsigned int *)(out + 36) = *(const unsigned short *)(source + 54);
    FUN_020654dc(source + 4, out + 48, 6);
    count = 0;
    for (i = 0; i < 12; i++) {
        if (*(const unsigned short *)(source + 48) & DAT_0213a8b8[i].mask) {
            out[60 + count] = DAT_0213a8b8[i].value;
            if (*(const unsigned short *)(source + 46) & DAT_0213a8b8[i].mask) {
                out[60 + count] |= 128;
            }
            count++;
        }
    }
    *(int *)(out + 56) = count;
    *(unsigned int *)(out + 76) = *(const unsigned short *)(source + 50);
    mode = *(const unsigned short *)(source + 44) & 3;
    if (mode == 1) *(int *)(out + 80) = 1;
    else if (mode == 2) *(int *)(out + 80) = 2;
    else *(int *)(out + 80) = 0;
}
