// flags: -O4,s
typedef struct { unsigned char b[4]; } Head4;
typedef struct { unsigned int v[3]; } Tail3;
typedef struct { unsigned char tag[4]; unsigned int v[3]; } Record;
extern void FUN_02039534(void *, void *);
void FUN_02088dd8(char *self, Record *in, unsigned int a, unsigned int b) {
    FUN_02039534(self + 16, self);
    *(Head4 *)self = *(const Head4 *)in->tag;
    *(Tail3 *)(self + 4) = *(const Tail3 *)in->v;
    *(unsigned int *)(self + 40) = a;
    *(unsigned int *)(self + 44) = b;
}
