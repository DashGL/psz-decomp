// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020656b8(void *, int, int);

void FUN_0202bdd4(unsigned int *ctx) {
    FUN_020656b8(ctx, 0, 0x58);
    ctx[0] = 0x67452301u;
    ctx[1] = 0xefcdab89u;
    ctx[2] = 0x98badcfeu;
    ctx[3] = 0x10325476u;
}
