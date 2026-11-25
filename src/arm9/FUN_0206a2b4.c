// flags: -O4,p -noThumb
extern const unsigned char DAT_020f21d4[];

unsigned short FUN_0206a2b4(int value) {
    unsigned int level;
    unsigned int byte;
    if (value < -723) {
        value = -723;
    } else if (value > 0) {
        value = 0;
    }
    byte = DAT_020f21d4[value + 723];
    if (value < -240) {
        level = 3;
    } else if (value < -120) {
        level = 2;
    } else if (value < -60) {
        level = 1;
    } else {
        level = 0;
    }
    return (unsigned short)(byte | (level << 8));
}
