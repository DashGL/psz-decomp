// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
extern int FUN_0205ffd0(int, int);
extern int FUN_020683d4(void);
extern int FUN_020683e8(int);
extern void FUN_020641ec(int);
extern void FUN_overlay_15__02133b9c(int);

extern unsigned short *data_0213e8dc;

void FUN_overlay_15__021338ec(void) {
    unsigned short active = 0;
    unsigned short i;

    for (i = 1; i < 16; i++) {
        if (data_0213e8dc[5] & (1 << i)) {
            if (FUN_0205ffd0(i, 3) == 0) {
                unsigned short inv = ~(1 << i);
                int irq = FUN_020683d4();
                data_0213e8dc[1] &= inv;
                data_0213e8dc[2] &= inv;
                data_0213e8dc[3] &= inv;
                data_0213e8dc[4] &= inv;
                data_0213e8dc[5] &= inv;
                data_0213e8dc[6] &= inv;
                FUN_020683e8(irq);
                FUN_020641ec(i);
            } else {
                active |= 1 << i;
            }
        }
    }
    if (active == 0) {
        FUN_overlay_15__02133b9c(7);
    } else {
        FUN_overlay_15__02133b9c(4);
    }
}
