// flags: -O4,p
extern void FUN_overlay_15__021204c0(int, unsigned int *);
unsigned int FUN_overlay_15__02120488(unsigned int crc, const unsigned char *data, int count, int ready, unsigned int *table) {
    int i;
    if (!ready) FUN_overlay_15__021204c0(ready, table);
    for (i = 0; i < count; i++) crc = (crc >> 8) ^ table[(data[i] ^ crc) & 255];
    return crc;
}
