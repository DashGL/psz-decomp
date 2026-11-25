// flags: -O4,s
extern unsigned short DAT_0211b3ec[];
extern unsigned char DAT_0211b444[];
extern int FUN_020dd6c4(const void *);

unsigned int FUN_020c0598(void) {
    unsigned short *counter = DAT_0211b3ec;
    int attempt, i, is_free;
    unsigned int result;
    for (attempt = 0; attempt < 65; ++attempt) {
        is_free = 1;
        for (i = 0; i < 64; ++i) {
            if (FUN_020dd6c4(DAT_0211b444 + 12 * i) == 1) {
                unsigned short v = *(volatile unsigned short *)((unsigned char *)counter + 52 * i + 0x35e);
                if (v == *counter) {
                    is_free = 0;
                    break;
                }
            }
        }
        if (is_free == 1) {
            break;
        }
        ++(*counter);
    }
    result = *counter;
    *counter = result + 1;
    return result;
}
