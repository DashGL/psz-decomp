// flags: -O4,p -noThumb
extern void FUN_02065774(const void *, void *, int);
extern int FUN_020015ac(const void *, const void *, int);
extern void FUN_02028a24(void *);

void FUN_02029734(unsigned char *self, const unsigned char *pkt) {
    unsigned char b30;
    unsigned char b22;

    FUN_02065774(pkt + 2, self + 0x54, 0x20);
    b30 = self[0x30];
    b22 = pkt[0x22];
    pkt = (const unsigned char *)(((int)pkt + 0x23) & 0xFFFFFFFFFFFFFFFFULL);
    if (b30 != 0 && b22 == 0x20 && FUN_020015ac(self + 0x74, pkt, 0x20) == 0) {
        self[0x31] = 1;
    } else {
        if (b30 != 0) {
            FUN_02028a24(self);
        }
        if (b22 == 0) {
            self[0x30] = 0;
        } else {
            FUN_02065774(pkt, self + 0x74, 0x20);
            self[0x30] = 1;
        }
        self[0x31] = 0;
    }
    *(unsigned short *)(self + 0x32) = (unsigned short)((pkt[b22] << 8) + (pkt + b22)[1]);
    self[0x455] = 2;
}
