// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020656b8(void *, int, int);

void FUN_0202c694(unsigned int *p) {
    FUN_020656b8(p, 0, 0x5c);
    p[0] = 0x67452301;
    p[1] = 0xefcdab89;
    p[2] = 0x98badcfe;
    p[3] = 0x10325476;
    p[4] = 0xc3d2e1f0;
}
