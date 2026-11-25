// flags: -O4,s -noThumb
void FUN_0205fd54(unsigned short *table, unsigned int polynomial) {
    unsigned int value, j, i;
    for (i = 0; i < 256; i++) {
        value = i;
        for (j = 0; j < 8; j++) {
            if (value & 1) value = polynomial ^ (value >> 1);
            else value >>= 1;
        }
        table[i] = value;
    }
}
