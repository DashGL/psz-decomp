// flags: -O4,p -noThumb
unsigned int FUN_02069224(unsigned int bcd) {
    int i;
    unsigned int total = 0;
    unsigned int weight;
    for (i = 0; i < 8; i++) {
        if (((bcd >> (i * 4)) & 15) >= 10) return 0;
    }
    weight = 1;
    for (i = 0; i < 8; i++) {
        total += weight * ((bcd >> (i * 4)) & 15);
        weight *= 10;
    }
    return total;
}
