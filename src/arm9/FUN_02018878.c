// flags: -O4,s -noThumb
typedef struct {
    unsigned char *ptr;
    signed char avail;
    unsigned char byte;
} BitReader;

unsigned int FUN_02018878(BitReader *s, int count) {
    int avail = s->avail;
    unsigned int byte = s->byte;
    int val;
    if (avail < count) {
        int rem = count - avail;
        s->byte = *s->ptr++;
        s->avail = 8;
        val = FUN_02018878(s, rem) | (byte << rem);
    } else {
        int rem = avail - count;
        val = byte >> rem;
        s->avail = (signed char)rem;
    }
    return val & (0xff >> (8 - count));
}
