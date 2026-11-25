// flags: -O4,p
extern void FUN_overlay_11__02122a4c(void *, const void *);
void FUN_overlay_11__02122a38(unsigned char *dst, const unsigned char *src) {
    FUN_overlay_11__02122a4c(dst, src + 0x24);
    dst[8] = src[0x2c];
}
