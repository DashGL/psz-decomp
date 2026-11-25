// flags: -O4,s
extern int DAT_0211c8e4[];
extern signed char FUN_020c2fc8(int);
extern int FUN_020c3018(int, signed char);

int FUN_020c2ec8(int channel) {
    int result;
    if (channel < 0 || channel > 2) {
        return 0;
    }
    result = 0;
    if (DAT_0211c8e4[channel] == 1) {
        signed char value = FUN_020c2fc8(channel);
        if (value == 0) {
            DAT_0211c8e4[channel] = 0;
            FUN_020c3018(channel, 0);
        } else {
            signed char step;
            if (value < 0) {
                if (value <= -4) {
                    step = 4;
                } else {
                    step = -value;
                }
            } else {
                if (value >= 4) {
                    step = -4;
                } else {
                    step = -value;
                }
            }
            value += step;
            result = FUN_020c3018(channel, value);
        }
    }
    return result;
}
