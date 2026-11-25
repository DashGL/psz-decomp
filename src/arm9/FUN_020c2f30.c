// flags: -O4,s
extern int DAT_0211c8e4[];
extern const int DAT_020fcb14[];
extern signed char FUN_020c2fc8(int);
extern int FUN_020c3018(int, signed char);

int FUN_020c2f30(int screen) {
    int result;
    if (screen < 0 || screen > 2) {
        return 0;
    }
    result = 0;
    if (DAT_0211c8e4[screen] == 2) {
        signed char value = FUN_020c2fc8(screen);
        if (DAT_020fcb14[screen] == 1) {
            if (value > -16) {
                signed char step = -16 - value;
                if (step <= -4) {
                    step = -4;
                }
                value += step;
                result = FUN_020c3018(screen, value);
            } else {
                DAT_0211c8e4[screen] = 0;
                FUN_020c3018(screen, -16);
            }
        } else {
            if (value < 16) {
                signed char step = 16 - value;
                if (step >= 4) {
                    step = 4;
                }
                value += step;
                result = FUN_020c3018(screen, value);
            } else {
                DAT_0211c8e4[screen] = 0;
                FUN_020c3018(screen, 16);
            }
        }
    }
    return result;
}
