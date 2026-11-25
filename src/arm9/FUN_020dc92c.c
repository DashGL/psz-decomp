// flags: -O4,p
extern unsigned int FUN_020dc8e4(unsigned int);
unsigned int FUN_020dc92c(unsigned char *input, unsigned char *output, unsigned int length, unsigned int capacity)
{
    int remainder, whole, position, i;
    if (capacity >= ((length * 3u) >> 2)) {
        remainder = length & 3;
        whole = length - remainder;
    } else {
        return ~0u;
    }
    for (position = 0; position < whole; position += 4) {
        unsigned int value;
        unsigned int acc = 0;
        for (i = 0; i < 4; i++)
            acc |= FUN_020dc8e4(input[position + i]) << ((3 - i) * 6);
        value = acc;
        for (i = 0; i < 3; i++)
            output[(position / 4) * 3 + i] = ((unsigned char *)&value)[2 - i];
    }
    if (remainder) {
        unsigned int value2 = 0;
        unsigned int tmp = 0;
        for (i = 0; i < remainder; i++) {
            tmp |= FUN_020dc8e4(input[whole + i]) << ((3 - i) * 6);
            value2 |= tmp;
        }
        for (i = 0; i < remainder; i++)
            output[(whole * 3) / 4 + i] = ((unsigned char *)&value2)[2 - i];
    }
    return (length * 3u) >> 2;
}
