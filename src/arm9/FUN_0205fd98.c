// flags: -O4,p -noThumb
void FUN_0205fd98(const unsigned short *table, unsigned short *state, const unsigned char *data, unsigned int count) {
    unsigned int value = *state;
    unsigned int i;
    for (i = 0; i < count; i++) {
        unsigned int idx = (value ^ *data++) << 24;
        value = (value >> 8) ^ table[idx >> 24];
    }
    *state = (unsigned short)value;
}
