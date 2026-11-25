// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int DAT_027ffc3c;
extern void FUN_020684f4(unsigned char *);

unsigned short FUN_02053980(void) {
    unsigned char mac[8];
    int i;
    unsigned short sum;
    FUN_020684f4(mac);
    i = 0;
    sum = 0;
    for (; i < 6; i++) {
        sum += mac[i];
    }
    sum += DAT_027ffc3c;
    sum *= 13;
    return (sum % 10) + 30;
}
