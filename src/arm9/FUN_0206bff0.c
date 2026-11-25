// flags: -O4,s -noThumb
void FUN_0206bff0(unsigned int *bits, unsigned int start, unsigned int end) {
    unsigned int word, mask, tail;
    if (start >= end)
        return;
    tail = (1u << (end & 31)) - 1;
    do {
        word = start >> 5;
        mask = ~0u << (start & 31);
        start = (word + 1) << 5;
        if (end < start)
            mask &= tail;
        bits[word] |= mask;
    } while (start < end);
}
