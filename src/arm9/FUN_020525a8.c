// flags: -O4,p
struct S8 { unsigned int a, b; };
void *FUN_020525a8(unsigned int *dst, const unsigned int *src) {
    *(struct S8 *)dst = *(const struct S8 *)src;
    dst[2] = src[2];
    return dst;
}
