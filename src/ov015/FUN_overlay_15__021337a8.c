// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
int FUN_0205ffd0(int, int);
int FUN_020683d4(void);
void FUN_020683e8(int);
void FUN_020641ec(int);

extern unsigned short *data_0213e8dc;

void FUN_overlay_15__021337a8(int aid) {
    if (FUN_0205ffd0(aid, 2) == 0) {
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
        int irq = FUN_020683d4();
        data_0213e8dc[3] &= ~(1 << aid);
        data_0213e8dc[4] |= (1 << aid);
        FUN_020683e8(irq);
    }
}
