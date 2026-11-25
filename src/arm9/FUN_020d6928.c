// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
extern void FUN_020d6860(unsigned char *, unsigned char *);

void FUN_020d6928(unsigned char *a0, int a1, unsigned char *a2, int a3) {
    unsigned char s[256];
    short i;
    unsigned char k, j;
    for (i = 0; i < 256; i++) {
        s[i] = i;
    }
    k = 0;
    j = 0;
    for (i = 0; i < 256; i++) {
        j = (s[i] + a0[k] + j) % 256;
        k = (k + 1) % a1;
        FUN_020d6860(&s[i], &s[j]);
    }
    k = 0;
    j = 0;
    for (i = 0; i < a3; i++) {
        unsigned char t;
        k = (k + a2[i] + 1) % 256;
        j = (s[k] + j) % 256;
        FUN_020d6860(&s[k], &s[j]);
        t = (s[k] + s[j]) % 256;
        a2[i] ^= s[t];
    }
}
