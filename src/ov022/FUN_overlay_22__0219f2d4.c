//cpp
// flags: -O4,s
struct Pkt { int a, b, c; signed char d[4]; };
extern "C" {
extern char DAT_0211a51c[];
extern void FUN_overlay_22__0219f12c(Pkt *);
extern void FUN_overlay_22__0219f14c(Pkt *, int, int);
extern void FUN_020bce3c(Pkt *);
extern int FUN_02084bd4(void *);
extern int FUN_02084d00(void *);
extern void FUN_overlay_22__0219f34c(void *, Pkt *);
void FUN_overlay_22__0219f2d4(int *self, signed char *src) {
    Pkt pkt;
    FUN_overlay_22__0219f12c(&pkt);
    pkt.d[0] = 0;
    pkt.d[1] = 0;
    pkt.d[2] = 0;
    pkt.d[3] = 0;
    FUN_overlay_22__0219f14c(&pkt, 3, 16);
    pkt.b = self[3];
    pkt.d[0] = src[0];
    pkt.d[1] = src[1];
    pkt.d[2] = src[2];
    pkt.d[3] = src[3];
    FUN_020bce3c(&pkt);
    if (((FUN_02084bd4(DAT_0211a51c) == 1 && FUN_02084d00(DAT_0211a51c) == 1) ? 1 : 0) == 1) {
        FUN_overlay_22__0219f34c(self, &pkt);
    }
}
}
