// flags: -O4,p -noThumb
typedef unsigned int u32;
extern const u32 UNK_020f93f4[], UNK_020f94b4[];

static inline u32 ROTL(u32 x, int s) { return (x << s) | (x >> (32 - s)); }
static inline u32 F(u32 b, u32 c, u32 d) { return (b & c) | (~b & d); }
static inline u32 G(u32 b, u32 c, u32 d) { return (b & d) | (c & ~d); }
static inline u32 H(u32 b, u32 c, u32 d) { return b ^ c ^ d; }
static inline u32 I(u32 b, u32 c, u32 d) { return c ^ (b | ~d); }

#define STEP(fn, a, b, c, d, w, t, s) \
    ((a) = (b) + ROTL((a) + fn(b, c, d) + (w) + (t), s))

void FUN_0205797c(u32 *state)
{
    const u32 *idx;
    u32 a, b, c, d;
    u32 *words;
    const u32 *t;
    const u32 *w;
    int i;

    a = state[0];
    b = state[1];
    c = state[2];
    d = state[3];
    words = state + 6;
    t = UNK_020f94b4;
    w = words;
    for (i = 0; i < 4; i++) {
        STEP(F, a, b, c, d, *w++, *t++, 7);
        STEP(F, d, a, b, c, *w++, *t++, 12);
        STEP(F, c, d, a, b, *w++, *t++, 17);
        STEP(F, b, c, d, a, *w++, *t++, 22);
    }
    idx = UNK_020f93f4;
    for (i = 0; i < 4; i++) {
        STEP(G, a, b, c, d, words[*idx++], *t++, 5);
        STEP(G, d, a, b, c, words[*idx++], *t++, 9);
        STEP(G, c, d, a, b, words[*idx++], *t++, 14);
        STEP(G, b, c, d, a, words[*idx++], *t++, 20);
    }
    for (i = 0; i < 4; i++) {
        STEP(H, a, b, c, d, words[*idx++], *t++, 4);
        STEP(H, d, a, b, c, words[*idx++], *t++, 11);
        STEP(H, c, d, a, b, words[*idx++], *t++, 16);
        STEP(H, b, c, d, a, words[*idx++], *t++, 23);
    }
    for (i = 0; i < 4; i++) {
        STEP(I, a, b, c, d, words[*idx++], *t++, 6);
        STEP(I, d, a, b, c, words[*idx++], *t++, 10);
        STEP(I, c, d, a, b, words[*idx++], *t++, 15);
        STEP(I, b, c, d, a, words[*idx++], *t++, 21);
    }
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
}
