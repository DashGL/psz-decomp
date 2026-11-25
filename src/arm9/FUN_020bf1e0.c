// flags: -O4,s
void *FUN_020bf1e0(signed char *s, int count) {
    signed char *base = s + 96;
    int start = 0;
    for (;;) {
        int end, free;
        while (start < 96 && s[start]) start += s[start];
        if (start >= 96) break;
        end = start;
        free = 0;
        while (end < 96 && s[end] == 0 && free < count) {
            end++;
            free++;
        }
        if (end < 96 && free == count) {
            s[start] = count;
            return base + 52 * start;
        }
        start = end;
    }
    return 0;
}
