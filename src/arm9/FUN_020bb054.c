// flags: -O4,s
#pragma opt_dead_assignments off
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_020bce3c(void *);

typedef struct {
    unsigned char pad[0xc];
    signed char id[4];
} Src;

typedef struct {
    unsigned char hdr[4];
    signed char data[4];
} Pkt;

void FUN_020bb054(Src *s) {
    Pkt pkt;
    int i;
    pkt.hdr[0] = 1;
    pkt.hdr[1] = 0;
    pkt.hdr[2] = 0;
    pkt.hdr[3] = 0;
    FUN_0200c938(pkt.data, 4);
    pkt.hdr[2] = 0;
    pkt.hdr[3] = 1;
    pkt.hdr[0] = 2;
    for (i = 0; i < 4; i++) {
        pkt.data[i] = s->id[i];
    }
    FUN_020bce3c(&pkt);
}
