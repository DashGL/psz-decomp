// flags: -O4,s
extern unsigned char *FUN_020dac74(unsigned int);
extern unsigned int FUN_020dada0(unsigned int);

void FUN_020dacb8(unsigned char value) {
    unsigned char *s = FUN_020dac74(1);
    unsigned char *other = FUN_020dac74(16);
    s[9] = value;
    if (value < 16 && value > s[22]) {
        s[22] = value;
        if (value > 7) {
            s[21] = FUN_020dada0(other[3341]);
            s[20] = (other + other[3347] * 4)[1092];
        }
    }
}
