// flags: -O4,p
int FUN_overlay_15__021206a0(const unsigned char *a, const unsigned char *b, int count) {
    int diff = 0;
    while (count-- > 0 && (diff = *a - *b) == 0) {
        a++;
        b++;
    }
    return diff;
}
