// flags: -O4,s
extern const short DAT_020ed83c[];
extern void FUN_020bc628(int *, int *);

void FUN_02052668(char *s, int value, int angle, int mode) {
    if (value > 0) {
        int input = value;
        int output;
        *(int *)(s + 0x10) = value;
        *(unsigned short *)(s + 0x1a) = (unsigned short)angle;
        if (angle == 0xffff) {
            *(int *)(s + 0x1c) = -4096;
        } else {
            *(int *)(s + 0x1c) = DAT_020ed83c[((angle >> 4) << 1) + 1];
        }
        FUN_020bc628(&output, &input);
        *(int *)(s + 0x14) = input;
        if (mode >= 0 && mode <= 7) {
            s[0x10f] = mode;
        } else {
            s[0x10f] = 7;
        }
    }
}
