// flags: -O4,p
struct S8 { unsigned int a, b; };
void FUN_02077984(unsigned char *dest, unsigned char *source) {
    dest[0] = source[0];
    dest[1] = source[1];
    *(unsigned int *)(dest + 4) = *(unsigned int *)(source + 4);
    *(unsigned int *)(dest + 8) = *(unsigned int *)(source + 8);
    *(unsigned int *)(dest + 12) = *(unsigned int *)(source + 12);
    *(unsigned int *)(dest + 16) = *(unsigned int *)(source + 16);
    *(unsigned int *)(dest + 20) = *(unsigned int *)(source + 20);
    *(unsigned int *)(dest + 24) = *(unsigned int *)(source + 24);
    *(struct S8 *)(dest + 28) = *(const struct S8 *)(source + 28);
}
