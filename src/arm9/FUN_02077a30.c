// flags: -O4,s
typedef struct { unsigned short v[7]; } Copy14;
extern void FUN_020c4560(void *);
void FUN_02077a30(unsigned char *s, unsigned char *source) {
    int i;
    for (i = 0; i < *(int *)(source + 132); i++) {
        int offset = 44 * i;
        FUN_020c4560(s + 64 + offset);
        s[64 + offset] = source[28 + offset];
        s[65 + offset] = source[29 + offset];
        *(Copy14 *)(s + 66 + offset) = *(Copy14 *)(source + 30 + offset);
    }
}
