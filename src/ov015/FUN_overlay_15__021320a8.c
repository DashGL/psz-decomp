// flags: -O4,p
#pragma thumb off
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);
extern int FUN_02005898(const void *);
#pragma thumb on
void FUN_overlay_15__021320a8(const char *source, unsigned char *out) {
    unsigned char text[4];
    int i, j;
    FUN_020656b8(text, 0, 4);
    for (i = 0; i < 4; i++) {
        FUN_02065774(source + 3 * i, text, 3);
        for (j = 0; j < 3; j++) {
            if (text[j]) break;
            text[j] = ' ';
        }
        out[i] = FUN_02005898(text);
    }
}
