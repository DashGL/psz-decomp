// flags: -O4,s
#pragma always_inline on
extern unsigned char DAT_0213d228[];
static inline unsigned int crc_entry(unsigned int value) {
    int bit;
    for (bit = 0; bit < 8; bit++) {
        if (value & 1) value = (value >> 1) ^ 0xedb88320u;
        else value >>= 1;
    }
    return value;
}
void *FUN_overlay_12__0211eb94(unsigned int *p) {
    int i;
    unsigned int *out;
    p[0] = (unsigned int)DAT_0213d228;
    for (i = 0, out = p + 1; i < 256; i++, out++) {
        *out = crc_entry(i);
    }
    return p;
}
