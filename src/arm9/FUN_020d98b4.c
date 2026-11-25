// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_02003c70(char *);
extern void FUN_020d7884(char *, char *, int);

void FUN_020d98b4(signed char *a, signed char *b, int c) {
    int len = FUN_02003c70((char *)(a + 0x54));
    signed char *p54 = a + 0x54;
    int i;
    for (i = 0; i < c; i++) {
        int idx = (i * p54[i % len]) % 8;
        a[idx + 0x74] ^= (signed char)(a[(i % 8) + 0x74] ^ b[i]);
    }
    FUN_020d7884((char *)(a + 0x6c0), (char *)(a + 0x74), 8);
}
