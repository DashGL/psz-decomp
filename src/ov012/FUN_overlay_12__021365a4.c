// flags: -O4,s
void FUN_overlay_12__021365a4(char *out, int capacity, int value) {
    signed char digits[8];
    int limit = capacity - 1;
    if (out && limit > 0) {
        int last = 0, i = 0;
        int n;
        while (value > 0 && i < limit) {
            last = i;
            digits[i] = (signed char)(value % 10 + 48);
            value /= 10;
            i++;
        }
        n = 0;
        if (last >= 0) {
            while (last >= 0) out[n++] = digits[last--];
        }
        out[n] = 0;
    }
}
