// flags: -O4,s
#pragma opt_dead_assignments off
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce50(void *);
struct Pkt {
    unsigned int hdr;
    signed char f4;
    signed char f5;
    signed char f6;
    signed char f7;
};
void FUN_0208de20(void *unused, signed char a, signed char b, signed char c) {
    struct Pkt pkt;
    FUN_02036094(&pkt);
    FUN_020360a4(&pkt, 2, 26, 8);
    pkt.f4 = -1;
    pkt.f5 = 0;
    pkt.f6 = 0;
    pkt.f7 = 0;
    pkt.f4 = a;
    pkt.f6 = b;
    pkt.f7 = c;
    FUN_020bce50(&pkt);
}
