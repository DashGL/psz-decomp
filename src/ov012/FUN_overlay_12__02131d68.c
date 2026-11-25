// flags: -O4,s
unsigned int FUN_overlay_12__02131d68(unsigned short *self, unsigned int value) {
    return (unsigned short)(((self[3] & 3u) << 10) | (value & ~0xc00u));
}
