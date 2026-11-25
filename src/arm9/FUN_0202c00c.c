// flags: -O4,p -noThumb
typedef unsigned int u32;
extern void FUN_0202bfc4(u32 *, const void *, u32);
extern u32 FUN_0202bf3c(u32, u32 *);

#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define CH(b, c, d) ((d) ^ ((b) & ((c) ^ (d))))
#define XOR(b, c, d) ((b) ^ (c) ^ (d))
#define MAJ(b, c, d) (((b) & ((c) | (d))) | ((c) & (d)))
#define STEP(fn, a, b, c, d, e, w, k) \
    do { (e) += ROL(a, 5) + fn(b, c, d) + (w) + (k); (b) = ROL(b, 30); } while (0)

void FUN_0202c00c(u32 *state, const void *input) {
    u32 a = state[0];
    u32 b = state[1];
    u32 c = state[2];
    u32 d = state[3];
    u32 e = state[4];
    u32 words[16];
    int s;
    int i;

    FUN_0202bfc4(words, input, 64);

    s = 0;
    for (i = 0; i < 3; i++) {
        STEP(CH, a, b, c, d, e, words[s], 0x5a827999);
        STEP(CH, e, a, b, c, d, words[s + 1], 0x5a827999);
        STEP(CH, d, e, a, b, c, words[s + 2], 0x5a827999);
        STEP(CH, c, d, e, a, b, words[s + 3], 0x5a827999);
        STEP(CH, b, c, d, e, a, words[s + 4], 0x5a827999);
        s += 5;
    }
    STEP(CH, a, b, c, d, e, words[15], 0x5a827999);
    STEP(CH, e, a, b, c, d, FUN_0202bf3c(0, words), 0x5a827999);
    STEP(CH, d, e, a, b, c, FUN_0202bf3c(1, words), 0x5a827999);
    STEP(CH, c, d, e, a, b, FUN_0202bf3c(2, words), 0x5a827999);
    STEP(CH, b, c, d, e, a, FUN_0202bf3c(3, words), 0x5a827999);

    s = 4;
    for (i = 0; i < 4; i++) {
        STEP(XOR, a, b, c, d, e, FUN_0202bf3c(s, words), 0x6ed9eba1);
        STEP(XOR, e, a, b, c, d, FUN_0202bf3c(s + 1, words), 0x6ed9eba1);
        s = (s + 2) & 15;
        STEP(XOR, d, e, a, b, c, FUN_0202bf3c(s, words), 0x6ed9eba1);
        STEP(XOR, c, d, e, a, b, FUN_0202bf3c(s + 1, words), 0x6ed9eba1);
        STEP(XOR, b, c, d, e, a, FUN_0202bf3c(s + 2, words), 0x6ed9eba1);
        s += 3;
    }

    for (i = 0; i < 4; i++) {
        STEP(MAJ, a, b, c, d, e, FUN_0202bf3c(s, words), 0x8f1bbcdc);
        STEP(MAJ, e, a, b, c, d, FUN_0202bf3c(s + 1, words), 0x8f1bbcdc);
        STEP(MAJ, d, e, a, b, c, FUN_0202bf3c(s + 2, words), 0x8f1bbcdc);
        s = (s + 3) & 15;
        STEP(MAJ, c, d, e, a, b, FUN_0202bf3c(s, words), 0x8f1bbcdc);
        STEP(MAJ, b, c, d, e, a, FUN_0202bf3c(s + 1, words), 0x8f1bbcdc);
        s += 2;
    }

    for (i = 0; i < 4; i++) {
        STEP(XOR, a, b, c, d, e, FUN_0202bf3c(s, words), 0xca62c1d6);
        STEP(XOR, e, a, b, c, d, FUN_0202bf3c(s + 1, words), 0xca62c1d6);
        STEP(XOR, d, e, a, b, c, FUN_0202bf3c(s + 2, words), 0xca62c1d6);
        STEP(XOR, c, d, e, a, b, FUN_0202bf3c(s + 3, words), 0xca62c1d6);
        s = (s + 4) & 15;
        STEP(XOR, b, c, d, e, a, FUN_0202bf3c(s, words), 0xca62c1d6);
        s += 1;
    }

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    state[4] += e;
}
