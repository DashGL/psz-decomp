// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
void FUN_overlay_15__02133b9c(int);
int FUN_020683d4(void);
void FUN_020683e8(int);
void FUN_020641ec(int);
void FUN_overlay_15__021337a8(int);

extern unsigned short *data_0213e8dc;

void FUN_overlay_15__02133828(void) {
    unsigned short aid;

    FUN_overlay_15__02133b9c(3);
    for (aid = 1; aid < 16; aid++) {
        if ((data_0213e8dc[1] & (1 << aid)) != 0 && (data_0213e8dc[2] & (1 << aid)) == 0) {
            if ((data_0213e8dc[3] & (1 << aid)) == 0) {
                unsigned short mask = ~(1 << aid);
                int irq = FUN_020683d4();
                data_0213e8dc[1] &= mask;
                data_0213e8dc[2] &= mask;
                data_0213e8dc[3] &= mask;
                data_0213e8dc[4] &= mask;
                data_0213e8dc[5] &= mask;
                data_0213e8dc[6] &= mask;
                FUN_020683e8(irq);
                FUN_020641ec(aid);
            } else {
                FUN_overlay_15__021337a8(aid);
            }
        }
    }
}
