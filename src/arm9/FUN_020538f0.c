// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int DAT_027ffc3c;
extern void FUN_020684f4(unsigned char *);

unsigned short FUN_020538f0(void) {
    unsigned char mac[8];
    unsigned short sum;
    int i;
    unsigned char *p;
    FUN_020684f4(mac);
    i = 0;
    p = mac;
    sum = i;
    for (; i < 6; i++) {
        sum += *p++;
    }
    sum = (unsigned short)((unsigned short)(sum + DAT_027ffc3c) * 7);
    return (sum % 20) + 200;
}
