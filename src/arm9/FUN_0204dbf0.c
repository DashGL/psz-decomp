// flags: -O4,s
extern int FUN_0204db60(void *);
extern unsigned int FUN_02035b60(unsigned int);

int FUN_0204dbf0(int *record, unsigned int kind, int increment) {
    int ret = 0;
    if (FUN_0204db60(record)) {
        int value;
        if (increment < 0) {
            unsigned int random = FUN_02035b60(100);
            if (random < 20) increment = 15;
            else if (random < 60) increment = 10;
            else increment = 5;
        }
        value = 0;
        switch (kind) {
        case 1: value = (record[1] & 0x01fc0000) >> 18; break;
        case 2: value = (record[1] & 0x0003f800) >> 11; break;
        case 3: value = (record[1] & 0x000007f0) >> 4; break;
        case 4: value = ((record[2] & (int)0xfe000000) >> 25) & 127; break;
        case 5: value = (record[2] & 0x01fc0000) >> 18; break;
        }
        value += increment;
        if (value > 65) value = 65;
        switch (kind) {
        case 1: record[1] = (record[1] & ~0x01fc0000) | (value << 18); break;
        case 2: record[1] = (record[1] & ~0x0003f800) | (value << 11); break;
        case 3: record[1] = (record[1] & ~0x000007f0) | (value << 4); break;
        case 4: record[2] = (record[2] & 0x01ffffff) | (value << 25); break;
        case 5: record[2] = (record[2] & ~0x01fc0000) | (value << 18); break;
        }
        record[2] |= 0x1000;
        ret = 1;
    }
    return ret;
}
