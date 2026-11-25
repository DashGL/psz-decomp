// flags: -O4,s
unsigned int FUN_overlay_12__0211ee38(unsigned int *table, const unsigned char *bytes, unsigned int count) {
    unsigned int crc = ~0U;
    while ((int)--count >= 0) {
        unsigned int high = crc >> 8;
        unsigned int idx = (unsigned char)crc ^ *bytes++;
        crc = table[1 + idx] ^ high;
    }
    return crc ^ ~0U;
}
