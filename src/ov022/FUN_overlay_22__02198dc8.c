// flags: -O4,s
extern signed char DAT_0211a3c4[];
extern int FUN_overlay_22__0219a638(int, int);
extern void FUN_overlay_22__02197fe8(signed char *);
extern int FUN_02035b60(int);
extern void FUN_overlay_22__0219f22c(void *, signed char *);

int FUN_overlay_22__02198dc8(void *self)
{
    signed char packet[8];
    if (FUN_overlay_22__0219a638(*(signed char *)((char *)self + 0x14d), 1)) {
        FUN_overlay_22__02197fe8(packet);
        packet[1] = *(signed char *)((char *)self + 0x14d);
        switch (DAT_0211a3c4[13]) {
        case 0:
            switch (*(signed char *)((char *)self + 0x138)) {
            case 0: packet[0] = 8; packet[4] = FUN_02035b60(2); break;
            case 1: packet[0] = 7; packet[4] = FUN_02035b60(2); break;
            default: packet[0] = 8; packet[4] = FUN_02035b60(2); packet[5] = 7; packet[6] = 0; break;
            }
            break;
        case 1:
            switch (*(signed char *)((char *)self + 0x138)) {
            case 0: packet[0] = 7; packet[4] = FUN_02035b60(3) + 1; break;
            case 1: packet[0] = 7; packet[4] = FUN_02035b60(2) + 1; packet[5] = 8; packet[6] = FUN_02035b60(2) + 1; break;
            default: packet[0] = 7; packet[4] = FUN_02035b60(4) + 1; packet[5] = 8; packet[6] = FUN_02035b60(4) + 1; break;
            }
            break;
        case 2:
        default:
            packet[0] = FUN_02035b60(2) == 0 ? 7 : 8;
            switch (*(signed char *)((char *)self + 0x138)) {
            case 0: packet[4] = FUN_02035b60(4) + 1; break;
            case 1: packet[4] = FUN_02035b60(1) + 1; packet[5] = packet[0] != 7 ? 7 : 8; packet[6] = FUN_02035b60(1) + 1; break;
            default: packet[4] = FUN_02035b60(4) + 1; packet[5] = packet[0] != 7 ? 7 : 8; packet[6] = FUN_02035b60(4) + 1; break;
            }
            break;
        }
        FUN_overlay_22__0219f22c(*(void **)((char *)self + 4), packet);
        return 1;
    }
    return 0;
}
