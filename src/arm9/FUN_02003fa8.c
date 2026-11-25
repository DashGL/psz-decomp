// flags: -O4,p -noThumb
unsigned int FUN_02003fa8(unsigned int text, unsigned int pattern) {
    unsigned int first, current = text, needle, scan, a, b;
    if (!pattern || !(first = *(unsigned char *)pattern)) return text;
    a = *(unsigned char *)current++;
    while (a) {
        if (a == first) {
            scan = current;
            needle = pattern + 1;
            do {
                b = *(unsigned char *)needle++;
                a = *(unsigned char *)scan++;
            } while (a == b && a);
            if (!b) return current - 1;
        }
        a = *(unsigned char *)current++;
    }
    return 0;
}