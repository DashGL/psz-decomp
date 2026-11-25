// flags: -O4,s
unsigned short FUN_overlay_21__0219b65c(char *p) {
    char *owner = *(char **)(p + 4);
    unsigned short a = *(unsigned short *)(p + 0x50);
    unsigned short b = *(unsigned short *)(p + 0x4c);
    unsigned short c = *(unsigned short *)(owner + 0x108);
    unsigned short value = b + c + a;
    if (*(unsigned int *)(owner + 0xd4) == 1) {
        value -= 0x8000;
    }
    return value;
}
