// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
void FUN_020428d0(unsigned int *s) {
    if (s[35] == 20) {
        unsigned long long state = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        unsigned int value;
        DAT_0211c844[0] = state;
        value = (unsigned int)(((state >> 32) * 10ull) >> 32);
        if (value < 6) {
            s[15] = value;
            s[16] = s[36];
            s[17] = s[37];
            s[18] = 0;
            s[19] = 0;
        } else if (value <= 7) {
            unsigned int x = s[36];
            if (value != 6) x = 0u - x;
            s[20] = x;
            s[21] = s[37];
            s[23] = 0;
        } else {
            unsigned int x = s[36];
            if (value != 8) x = 0u - x;
            s[24] = x;
            s[25] = s[37];
            s[27] = 0;
        }
    }
}
