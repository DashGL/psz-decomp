// flags: -O4,s
unsigned int FUN_020c786c(unsigned int x) {
    unsigned int lo = 16807 * (x & 0xFFFF);
    unsigned int hi = 16807 * (x >> 16);
    lo += (hi & 0x7FFF) << 16;
    if (lo > 0x7FFFFFFF) {
        lo &= 0x7FFFFFFF;
        ++lo;
    }
    lo += hi >> 15;
    if (lo > 0x7FFFFFFF) {
        lo &= 0x7FFFFFFF;
        ++lo;
    }
    return lo;
}
