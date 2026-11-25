// flags: -O4,p -noThumb
typedef struct {
    unsigned int remain;
    unsigned char *ptr;
} Stream;
void FUN_0206c7e4(Stream *state, const signed char *source, int count) {
    unsigned int n;
    unsigned int i;
    if (count <= 0) {
        return;
    }
    n = (state->remain > (unsigned int)count) ? (unsigned int)count : state->remain;
    for (i = 0; i < n; i++) {
        state->ptr[i] = (unsigned char)source[i];
    }
    state->remain -= n;
    state->ptr += count;
}
