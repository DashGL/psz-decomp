// flags: -noThumb
void *FUN_020014f4(void *out, const void *in, unsigned int length) {
    if (in >= out) {
        const char *src = (const char *)in;
        char *p = (char *)out;
        while (length) {
            *p++ = *src++;
            --length;
        }
    } else {
        const char *src = (const char *)in + length;
        char *p = (char *)out + length;
        while (length) {
            *--p = *--src;
            --length;
        }
    }
    return out;
}
