#pragma opt_dead_assignments off
extern void FUN_02036094(void *);
extern void FUN_020c4434(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_02038a84(void *);
extern void FUN_0203955c(void *);
extern void FUN_020381f4(void *, void *);
extern void FUN_02039534(void *, void *);
extern void FUN_020bce3c(void *);
extern int FUN_02073198(void);
void FUN_02085f0c(void *a, void *b, void *c, int *value, int flag) {
    struct {
        int f0;
        char f4[0x64];
        char f68[0x10];
        char f78[0x10];
        int f88;
        short f8c;
        unsigned char f8e;
        unsigned char f8f;
    } pkt;
    FUN_02036094(&pkt);
    FUN_020c4434(pkt.f4);
    FUN_020c4434(pkt.f4 + 0x10);
    pkt.f88 = 0;
    FUN_020360a4(&pkt, 8, 0, 0x90);
    FUN_02038a84(pkt.f4);
    FUN_0203955c(pkt.f68);
    FUN_0203955c(pkt.f78);
    pkt.f8c = -1;
    pkt.f8e = 0;
    pkt.f8f = 0;
    FUN_020381f4(pkt.f4, a);
    FUN_02039534(pkt.f68, b);
    FUN_02039534(pkt.f78, c);
    pkt.f88 = *value;
    pkt.f8c = FUN_02073198();
    pkt.f8e = flag;
    FUN_020bce3c(&pkt);
}
