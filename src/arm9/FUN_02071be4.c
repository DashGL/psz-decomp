// flags: -O4,s
void FUN_02071be4(void *unused, short *out, int value) {
    int remaining = value; int divisor = 1000; int leading = 1; int i;
    for (i = 0; i < 4; i++) {
        short digit;
        out[i] = remaining / divisor;
        digit = out[i];
        remaining -= divisor * digit;
        divisor /= 10;
        if (i == 0) {
            if (digit == 0) out[i] = -1;
            else leading = 0;
        } else if (i == 3 && value == 0) {
            out[i] = 0;
        } else if (leading) {
            if (digit == 0) out[i] = -1;
            else leading = 0;
        }
    }
}
