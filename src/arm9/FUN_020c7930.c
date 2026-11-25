// flags: -O4,p
void FUN_020c7930(const signed char *source, unsigned char *dest, int count) {
    unsigned char temp[4];
    int i;
    for (i = 0; i < count; i++) {
        temp[i] = (unsigned char)source[i];
    }
    for (; i < 3; i++) {
        temp[i] = 0;
    }
    dest[0] = (unsigned char)(temp[0] >> 2);
    dest[1] = (unsigned char)(((temp[0] & 3) << 4) | (temp[1] >> 4));
    dest[2] = (unsigned char)(((temp[1] & 15) << 2) | (temp[2] >> 6));
    dest[3] = (unsigned char)(temp[2] & 63);
}
