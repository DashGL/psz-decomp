// flags: -O4,p -noThumb
typedef struct {
    unsigned char i;
    unsigned char j;
    unsigned char s[256];
} RC4State;
void FUN_0202c838(RC4State *context, const unsigned char *key, int key_len) {
    unsigned char x; unsigned char *s; unsigned char y, t; int i; unsigned char j, k;
    context->i = 0;
    context->j = 0;
    s = context->s;
    for (i = 0; i < 256; i++) {
        s[i] = (unsigned char)i;
    }
    k = 0;
    j = 0;
    for (i = 0; i < 256; i++) {
        x = s[i];
        y = key[k];
        k++;
        j += x + y;
        t = s[j];
        if (k >= key_len) {
            k = 0;
        }
        s[i] = t;
        s[j] = x;
    }
}
