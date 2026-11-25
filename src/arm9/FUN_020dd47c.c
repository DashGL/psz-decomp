// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x66, exact bytes and relocation targets.
// flags: -O4,p
long long FUN_020dd47c(char *a) {
    long long acc = 0;
    long long mul = 1;
    int i;
    a += 11;
    for (i = 0; i < 12; i++) {
        char c = *(a - i);
        if (c < '0' || c > '9') {
            return 0;
        }
        acc += (c - '0') * mul;
        mul *= 10;
    }
    return acc;
}
