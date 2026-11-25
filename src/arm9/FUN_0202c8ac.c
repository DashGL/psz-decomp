// flags: -O4,p -noThumb
typedef struct {
    unsigned char i;
    unsigned char j;
    unsigned char table[256];
} RC4_2c8ac;

void FUN_0202c8ac(RC4_2c8ac *state, unsigned char *bytes, int length) {
    int n;
    unsigned char i = state->i;
    unsigned char j = state->j;
    unsigned char *table = state->table;
    for (n = 0; n < length; ++n) {
        unsigned char x, y;
        i = (unsigned char)(i + 1);
        x = table[i];
        j = (unsigned char)(j + x);
        y = table[j];
        table[i] = y;
        table[j] = x;
        bytes[n] ^= table[(unsigned char)(x + y)];
    }
    state->i = i;
    state->j = j;
}
