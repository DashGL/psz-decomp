#pragma opt_dead_assignments off
extern char DAT_0211a51c[];
extern int FUN_02084ce8(void *);
extern int FUN_02078158(void);
extern int FUN_0209ce58(int);
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);
typedef struct {
    int f0, f4;
    int f8;
    signed char fc;
    signed char fd;
    unsigned char fe;
} Src_7ffe0;
void FUN_0207ffe0(void *unused, Src_7ffe0 *d) {
    struct {
        int f0;
        short f4;
        signed char f6, f7, f8, f9, fa, fb;
        int fc;
        signed char f10, f11, f12, f13;
        unsigned char f14;
        signed char f15, f16, f17;
    } pkt;
    if (FUN_02084ce8(DAT_0211a51c)) {
        FUN_02036094(&pkt);
        pkt.f6 = 0; pkt.f7 = 0; pkt.f8 = 0; pkt.f9 = 0; pkt.fa = 0; pkt.fb = 0;
        pkt.f12 = 0; pkt.f13 = 0;
        pkt.f4 = 0;
        pkt.fc = -1;
        pkt.f10 = 0; pkt.f11 = 0;
        pkt.f14 = 0; pkt.f15 = -1;
        pkt.f16 = 0; pkt.f17 = 0;
        FUN_020360a4(&pkt, 7, 0, 24);
        pkt.fc = d->f8;
        pkt.f10 = d->fc;
        pkt.f11 = d->fd;
        pkt.f4 = FUN_02078158();
        pkt.f14 = d->fe;
        pkt.f15 = FUN_0209ce58(pkt.fc);
        FUN_020bce3c(&pkt);
    }
}
