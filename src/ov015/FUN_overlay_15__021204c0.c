// flags: -O4,p
void FUN_overlay_15__021204c0(void *unused, unsigned int *out) {
    unsigned int c;
    int n, k;
    for (n = 0; n < 256; n++) {
        c = (unsigned int)n;
        for (k = 0; k < 8; k++) {
            if (c & 1) c = 0xedb88320U ^ (c >> 1);
            else c = c >> 1;
        }
        *out++ = c;
    }
}
