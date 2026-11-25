// flags: -O4,s
extern unsigned char *DAT_overlay_15__0213e8dc;
extern int FUN_overlay_15__02133ba8(void), FUN_overlay_15__02133bec(int);
extern void FUN_overlay_15__02133990(void), FUN_overlay_15__02133728(int), FUN_overlay_15__021336c8(int), FUN_overlay_15__021337a8(int), FUN_overlay_15__02133b9c(int);
#pragma thumb off
extern int FUN_020683d4(void);
extern void FUN_020683e8(int), FUN_02068728(void);
extern void *FUN_0205fef8(int);
extern void FUN_02065774(const void *, void *, unsigned int);
#pragma thumb on

void FUN_overlay_15__021339b0(int aid, unsigned int event, const unsigned char *payload) {
    unsigned char *p, *dest;
    unsigned int bit;
    unsigned short mask;
    int irq, offset;
    void *source;
    switch (event) {
    case 2:
        if (FUN_overlay_15__02133ba8() != 2) break;
        p = DAT_overlay_15__0213e8dc;
        irq = FUN_020683d4();
        *(unsigned short *)(p + 2) |= 1U << aid;
        FUN_020683e8(irq);
        offset = (aid - 1) * 30;
        dest = DAT_overlay_15__0213e8dc + 36 + offset;
        dest[0] = payload[10];
        dest[1] = payload[11];
        dest[2] = payload[12];
        dest[3] = payload[13];
        dest[4] = payload[14];
        dest[5] = payload[15];
        *(unsigned short *)(DAT_overlay_15__0213e8dc + offset + 42) = aid;
        break;
    case 3:
        if (FUN_overlay_15__02133bec(aid) == 6) break;
        mask = ~(1U << aid);
        irq = FUN_020683d4();
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 2) &= mask;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 4) &= mask;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 6) &= mask;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 8) &= mask;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 10) &= mask;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 12) &= mask;
        FUN_020683e8(irq);
        FUN_overlay_15__02133990();
        break;
    case 10:
        if (FUN_overlay_15__02133ba8() != 2) { FUN_overlay_15__02133728(aid); break; }
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 4) |= 1U << aid;
        FUN_overlay_15__021336c8(aid);
        source = FUN_0205fef8(aid);
        if (source) FUN_02065774(source, DAT_overlay_15__0213e8dc + 14 + (aid - 1) * 30, 22);
        break;
    case 14:
        bit = 1U << aid;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 4) &= ~bit;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 6) |= bit;
        if (FUN_overlay_15__02133ba8() == 3) FUN_overlay_15__021337a8(aid);
        break;
    case 7:
        bit = 1U << aid;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 8) &= ~bit;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 10) |= bit;
        break;
    case 9:
        bit = 1U << aid;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 10) &= ~bit;
        *(unsigned short *)(DAT_overlay_15__0213e8dc + 12) |= bit;
        FUN_overlay_15__02133990();
        break;
    case 12:
        if (FUN_overlay_15__02133ba8() == 4) {
            FUN_overlay_15__02133b9c(5);
        } else {
            FUN_overlay_15__02133b9c(0);
        }
        if (*(int *)(DAT_overlay_15__0213e8dc + 0x1b144)) *(int *)(DAT_overlay_15__0213e8dc + 0x1b144) = 0;
        if (*(int *)(DAT_overlay_15__0213e8dc + 0x1b140)) *(int *)(DAT_overlay_15__0213e8dc + 0x1b140) = 0;
        break;
    case 13:
        switch (*(const unsigned short *)payload) {
        case 1: case 2: case 9: FUN_overlay_15__02133b9c(7); break;
        case 8: break;
        }
        break;
    case 1: case 4: case 5: case 6: case 8: case 11: break;
    default: FUN_02068728(); break;
    }
}
