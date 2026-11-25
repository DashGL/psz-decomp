// flags: -O4,s
void FUN_overlay_4__0212b884(void *unused, char *out, int digits, int value) {
    int power, i, index, started;
    if (value == 0) return;
    power = 1;
    for (i = 0; i < digits - 1; i++) power *= 10;
    index = 0;
    started = 0;
    for (i = 0; i < digits; i++) {
        int q = value / power;
        if (q > 0) started = 1;
        if (started) {
            out[index] = q + 48;
            started = 1;
            index++;
            value -= power * q;
        }
        power /= 10;
    }
    out[index] = 0;
}
