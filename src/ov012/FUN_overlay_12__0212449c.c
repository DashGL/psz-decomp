// flags: -O4,s
typedef unsigned int U;
#define R(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define F(b, c, d) (((b) & (c)) | (~(b) & (d)))
#define G(b, c, d) (((b) & (d)) | ((c) & ~(d)))
#define H(b, c, d) ((b) ^ (c) ^ (d))
#define I(b, c, d) ((c) ^ ((b) | ~(d)))
#define STEP(f, a, b, c, d, x, k, n) \
    a += f(b, c, d) + (x) + (k); \
    a = R(a, n); \
    a += b

void FUN_overlay_12__0212449c(void *unused, U *state, const U *input) {
    U a = state[0], b = state[1], c = state[2], d = state[3];
    STEP(F, a, b, c, d, input[0],  0xd76aa478U, 7);
    STEP(F, d, a, b, c, input[1],  0xe8c7b756U, 12);
    STEP(F, c, d, a, b, input[2],  0x242070dbU, 17);
    STEP(F, b, c, d, a, input[3],  0xc1bdceeeU, 22);
    STEP(F, a, b, c, d, input[4],  0xf57c0fafU, 7);
    STEP(F, d, a, b, c, input[5],  0x4787c62aU, 12);
    STEP(F, c, d, a, b, input[6],  0xa8304613U, 17);
    STEP(F, b, c, d, a, input[7],  0xfd469501U, 22);
    STEP(F, a, b, c, d, input[8],  0x698098d8U, 7);
    STEP(F, d, a, b, c, input[9],  0x8b44f7afU, 12);
    STEP(F, c, d, a, b, input[10], 0xffff5bb1U, 17);
    STEP(F, b, c, d, a, input[11], 0x895cd7beU, 22);
    STEP(F, a, b, c, d, input[12], 0x6b901122U, 7);
    STEP(F, d, a, b, c, input[13], 0xfd987193U, 12);
    STEP(F, c, d, a, b, input[14], 0xa679438eU, 17);
    STEP(F, b, c, d, a, input[15], 0x49b40821U, 22);

    STEP(G, a, b, c, d, input[1],  0xf61e2562U, 5);
    STEP(G, d, a, b, c, input[6],  0xc040b340U, 9);
    STEP(G, c, d, a, b, input[11], 0x265e5a51U, 14);
    STEP(G, b, c, d, a, input[0],  0xe9b6c7aaU, 20);
    STEP(G, a, b, c, d, input[5],  0xd62f105dU, 5);
    STEP(G, d, a, b, c, input[10], 0x02441453U, 9);
    STEP(G, c, d, a, b, input[15], 0xd8a1e681U, 14);
    STEP(G, b, c, d, a, input[4],  0xe7d3fbc8U, 20);
    STEP(G, a, b, c, d, input[9],  0x21e1cde6U, 5);
    STEP(G, d, a, b, c, input[14], 0xc33707d6U, 9);
    STEP(G, c, d, a, b, input[3],  0xf4d50d87U, 14);
    STEP(G, b, c, d, a, input[8],  0x455a14edU, 20);
    STEP(G, a, b, c, d, input[13], 0xa9e3e905U, 5);
    STEP(G, d, a, b, c, input[2],  0xfcefa3f8U, 9);
    STEP(G, c, d, a, b, input[7],  0x676f02d9U, 14);
    STEP(G, b, c, d, a, input[12], 0x8d2a4c8aU, 20);

    STEP(H, a, b, c, d, input[5],  0xfffa3942U, 4);
    STEP(H, d, a, b, c, input[8],  0x8771f681U, 11);
    STEP(H, c, d, a, b, input[11], 0x6d9d6122U, 16);
    STEP(H, b, c, d, a, input[14], 0xfde5380cU, 23);
    STEP(H, a, b, c, d, input[1],  0xa4beea44U, 4);
    STEP(H, d, a, b, c, input[4],  0x4bdecfa9U, 11);
    STEP(H, c, d, a, b, input[7],  0xf6bb4b60U, 16);
    STEP(H, b, c, d, a, input[10], 0xbebfbc70U, 23);
    STEP(H, a, b, c, d, input[13], 0x289b7ec6U, 4);
    STEP(H, d, a, b, c, input[0],  0xeaa127faU, 11);
    STEP(H, c, d, a, b, input[3],  0xd4ef3085U, 16);
    STEP(H, b, c, d, a, input[6],  0x04881d05U, 23);
    STEP(H, a, b, c, d, input[9],  0xd9d4d039U, 4);
    STEP(H, d, a, b, c, input[12], 0xe6db99e5U, 11);
    STEP(H, c, d, a, b, input[15], 0x1fa27cf8U, 16);
    STEP(H, b, c, d, a, input[2],  0xc4ac5665U, 23);

    STEP(I, a, b, c, d, input[0],  0xf4292244U, 6);
    STEP(I, d, a, b, c, input[7],  0x432aff97U, 10);
    STEP(I, c, d, a, b, input[14], 0xab9423a7U, 15);
    STEP(I, b, c, d, a, input[5],  0xfc93a039U, 21);
    STEP(I, a, b, c, d, input[12], 0x655b59c3U, 6);
    STEP(I, d, a, b, c, input[3],  0x8f0ccc92U, 10);
    STEP(I, c, d, a, b, input[10], 0xffeff47dU, 15);
    STEP(I, b, c, d, a, input[1],  0x85845dd1U, 21);
    STEP(I, a, b, c, d, input[8],  0x6fa87e4fU, 6);
    STEP(I, d, a, b, c, input[15], 0xfe2ce6e0U, 10);
    STEP(I, c, d, a, b, input[6],  0xa3014314U, 15);
    STEP(I, b, c, d, a, input[13], 0x4e0811a1U, 21);
    STEP(I, a, b, c, d, input[4],  0xf7537e82U, 6);
    STEP(I, d, a, b, c, input[11], 0xbd3af235U, 10);
    STEP(I, c, d, a, b, input[2],  0x2ad7d2bbU, 15);
    STEP(I, b, c, d, a, input[9],  0xeb86d391U, 21);

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
}
