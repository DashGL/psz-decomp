// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
void FUN_overlay_15__021206c0(void *, const void *, int);
unsigned short FUN_overlay_15__0212079c(unsigned short);
unsigned int FUN_overlay_15__02120774(int);

extern signed char data_0213c2e0[];
extern int data_0213c2c0[];

short FUN_overlay_15__021200ec(char *pkt) {
    unsigned int val;
    short len;
    short padded;
    short total = 0;

    pkt[0] = data_0213c2e0[0x1d];
    pkt[1] = 1;
    len = (short)data_0213c2c0[10];
    FUN_overlay_15__021206c0(pkt + 6, (const void *)data_0213c2c0[9], len);
    *(unsigned short *)(pkt + 2) = FUN_overlay_15__0212079c((unsigned short)len);
    padded = (((short)(len + 6) + 1) / 2) * 2;
    *(unsigned short *)(pkt + 4) = FUN_overlay_15__0212079c((unsigned short)padded);
    total += padded;
    pkt[padded] = 0x60;
    (pkt + padded)[1] = 0;
    *(unsigned short *)(pkt + padded + 4) = FUN_overlay_15__0212079c(0);
    val = FUN_overlay_15__02120774(0xe);
    FUN_overlay_15__021206c0(pkt + padded + 6, &val, 4);
    *(unsigned short *)(pkt + padded + 2) = FUN_overlay_15__0212079c(4);
    total += 10;
    return total;
}
