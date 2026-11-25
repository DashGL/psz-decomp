// flags: -O4,p
extern void FUN_020dc92c(unsigned int, unsigned char *, unsigned int, unsigned int);
typedef struct {
    unsigned char b[24];
} Perm;
extern const Perm DAT_020f5fe7;
typedef struct {
    signed char *a;
    unsigned int b;
    signed char *c;
} S_02100158;
extern S_02100158 DAT_02100158;

void FUN_020dc740(unsigned int input, unsigned char *output) {
    Perm perm = DAT_020f5fe7;
    int i;
    FUN_020dc92c(input, output, 32, 24);
    for (i = 0; i < 24; i++) {
        output[i] ^= DAT_02100158.c[i];
    }
    for (i = 0; i < 24; i++) {
        unsigned char prev = (unsigned char)i;
        unsigned char cur = prev;
        unsigned char val = output[i];
        while (perm.b[cur] != 0xff) {
            unsigned char next = perm.b[cur];
            unsigned char saved = output[next];
            output[perm.b[prev]] = val;
            perm.b[cur] = 0xff;
            val = saved;
            prev = next;
            cur = next;
        }
    }
    for (i = 0; i < 24; i++) {
        output[i] ^= DAT_02100158.a[i];
    }
}
