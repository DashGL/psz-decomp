// flags: -O4,s
unsigned int FUN_020c36e4(unsigned short *out, const unsigned short *in, unsigned int capacity) {
    unsigned int end = (unsigned int)out + (capacity << 1) - 2, n = 0;
    unsigned short c;
    while ((unsigned int)out < end && (c = *in) != 0) {
        switch (c) { case 0x27: c = 0x2019; break; case 0x22: c = 0x201d; break; default: if ((c >= 0x21 && c <= 0x7e) || c == 0x203e) c = (unsigned short)(c + 0xfee0); break; }
        *out = c;
        ++n;
        ++in;
        ++out;
    }
    *out = 0;
    return n + 1;
}
