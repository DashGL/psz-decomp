// flags: -O4,p -noThumb
typedef unsigned int u32;
extern const unsigned char UNK_020f6a34[];
extern const u32 UNK_020f6ab4[];
extern void FUN_0202b9a0(void *, const void *, u32);

#define F(b, c, d) ((d) ^ ((b) & ((c) ^ (d))))
#define G(b, c, d) ((c) ^ ((d) & ((b) ^ (c))))
#define H(b, c, d) ((b) ^ (c) ^ (d))
#define I(b, c, d) ((c) ^ ((b) | ~(d)))
#define ROTL(x, s) (((x) << (s)) | ((x) >> (32 - (s))))
#define STEP(fn, a, b, c, d, k, s) \
    (a) += fn(b, c, d) + words[UNK_020f6a34[k]] + UNK_020f6ab4[k]; \
    (a) = (b) + ROTL(a, s);

void FUN_0202b9b8(u32 *state, const void *input) {
    u32 words[16];
    u32 a = state[0], b = state[1], c = state[2], d = state[3];
    int i;
    int j;

    FUN_0202b9a0(words, input, 64);

    i = 0;

    for (j = 0; j < 4; j++) {
        STEP(F, a, b, c, d, i, 7);
        STEP(F, d, a, b, c, i + 1, 12);
        STEP(F, c, d, a, b, i + 2, 17);
        STEP(F, b, c, d, a, i + 3, 22);
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        STEP(G, a, b, c, d, i, 5);
        STEP(G, d, a, b, c, i + 1, 9);
        STEP(G, c, d, a, b, i + 2, 14);
        STEP(G, b, c, d, a, i + 3, 20);
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        STEP(H, a, b, c, d, i, 4);
        STEP(H, d, a, b, c, i + 1, 11);
        STEP(H, c, d, a, b, i + 2, 16);
        STEP(H, b, c, d, a, i + 3, 23);
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        STEP(I, a, b, c, d, i, 6);
        STEP(I, d, a, b, c, i + 1, 10);
        STEP(I, c, d, a, b, i + 2, 15);
        STEP(I, b, c, d, a, i + 3, 21);
        i += 4;
    }

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
}
