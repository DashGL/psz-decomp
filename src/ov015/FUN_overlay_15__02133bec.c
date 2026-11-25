// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
int FUN_020683d4(void);
void FUN_020683e8(int);
void FUN_02065774(const void *, void *, int);

extern unsigned short *data_0213e8dc;

int FUN_overlay_15__02133bec(int aid) {
    unsigned short masks[7];
    int irq = FUN_020683d4();
    unsigned short bit = 1 << aid;

    if ((data_0213e8dc[1] & bit) == 0) {
        FUN_020683e8(irq);
        return 0;
    }
    FUN_02065774(data_0213e8dc, masks, 0x0e);
    FUN_020683e8(irq);
    if (masks[2] & bit) {
        return 2;
    }
    if (masks[3] & bit) {
        return 3;
    }
    if (masks[4] & bit) {
        return 4;
    }
    if (masks[5] & bit) {
        return 5;
    }
    if (masks[6] & bit) {
        return 6;
    }
    return 1;
}
