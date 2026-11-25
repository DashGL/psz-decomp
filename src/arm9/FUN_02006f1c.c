// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
void FUN_02006f1c(unsigned char *a0, unsigned long long a1) {
    a0[0] = 0;
    a0[4] = 0;
    if (a1 != 0) {
        do {
            a0[5 + a0[4]++] = (unsigned char)(a1 % 10ULL);
            a1 /= 10ULL;
        } while (a1 != 0);
    }
    {
        unsigned char *r2 = a0 + 5;
        unsigned char *r3 = r2 + a0[4] - 1;
        while (r2 < r3) {
            unsigned char t0 = *r3;
            unsigned char t1 = *r2;
            *r2++ = t0;
            *r3-- = t1;
        }
    }
    *(short *)(a0 + 2) = (short)(a0[4] - 1);
}
