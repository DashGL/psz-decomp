// flags: -O4,s
typedef union {
    unsigned int u;
    struct {
        unsigned int b0 : 8;
        unsigned int b1 : 8;
        unsigned int b2 : 8;
        unsigned int b3 : 8;
    } b;
} Word;

typedef struct {
    void *vtbl;
    unsigned int p[18];
    unsigned int s[4][256];
} Blowfish;

#define ROUND(A, B, N) \
    ((A).u ^= (self->p[N] ^ ((((self->s[0][(B).b.b0] + self->s[1][(B).b.b1]) ^ self->s[2][(B).b.b2]) + self->s[3][(B).b.b3]))))

void FUN_overlay_12__0211e640(const Blowfish *self, unsigned int *xl, unsigned int *xr) {
    Word Xl, Xr;
    Xl.u = *xl;
    Xr.u = *xr;

    Xl.u ^= self->p[0];
    ROUND(Xr, Xl, 1);
    ROUND(Xl, Xr, 2);
    ROUND(Xr, Xl, 3);
    ROUND(Xl, Xr, 4);
    ROUND(Xr, Xl, 5);
    ROUND(Xl, Xr, 6);
    ROUND(Xr, Xl, 7);
    ROUND(Xl, Xr, 8);
    ROUND(Xr, Xl, 9);
    ROUND(Xl, Xr, 10);
    ROUND(Xr, Xl, 11);
    ROUND(Xl, Xr, 12);
    ROUND(Xr, Xl, 13);
    ROUND(Xl, Xr, 14);
    ROUND(Xr, Xl, 15);
    ROUND(Xl, Xr, 16);
    Xr.u ^= self->p[17];

    *xl = Xr.u;
    *xr = Xl.u;
}
