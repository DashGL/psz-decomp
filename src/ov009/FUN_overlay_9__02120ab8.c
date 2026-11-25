// flags: -O4,p
extern const unsigned int DAT_02120ee4[];
unsigned int FUN_overlay_9__02120ab8(void *p, int index, unsigned int value) {
    if (index >= 1 && index <= 8) return (unsigned short)(value + DAT_02120ee4[index - 1]);
    return 0xffff;
}
