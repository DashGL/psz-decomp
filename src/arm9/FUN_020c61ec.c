// flags: -O4,p -noThumb
typedef struct {
    unsigned int x;
    unsigned int y;
    unsigned char s[256];
} RC4Ctx;

void FUN_020c61ec(RC4Ctx *self, const unsigned char *key, unsigned int length) {
    unsigned int key_index = 0, j = 0;
    int i;
    self->x = 0;
    self->y = 0;
    for (i = 0; i < 256; i++) {
        self->s[i] = (unsigned char)i;
    }
    for (i = 255; i >= 0; i--) {
        unsigned char a = self->s[i], b;
        j = (j + key[key_index] + a) & 0xff;
        b = self->s[j];
        self->s[j] = a;
        self->s[i] = b;
        if (++key_index >= length) key_index = 0;
    }
}
