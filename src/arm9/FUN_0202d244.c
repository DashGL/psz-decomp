// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065774(const void *src, void *dst, int sz);
extern int FUN_0202c940(unsigned short *a, int len);
extern void FUN_0202ced0(unsigned short *a, unsigned short *b, unsigned short *c, unsigned short *d, int len, unsigned short *work);
extern void FUN_0202cc2c(unsigned short *a, unsigned short *b, unsigned short *c, int len);
extern void FUN_0202cab0(unsigned short *a, unsigned short *b, unsigned short *c, int len);
extern void FUN_0202c970(unsigned short *a, unsigned short *b, unsigned short *c, int len);

void FUN_0202d244(unsigned short *p0, unsigned short *p1, unsigned short *p2, int len, unsigned short *work) {
    unsigned short *fp = work + len;
    unsigned short *r4 = fp + len;
    unsigned short *r5 = r4 + len;
    unsigned short *r6 = r5 + len;
    unsigned short *r7 = r6 + len;
    unsigned short *sp10 = r7 + len;
    int r8 = len << 1;

    FUN_02065774(p1, work, r8);
    FUN_02065774(p2, r4, r8);
    *(unsigned short *)((char *)r4 + r8) = 1;
    while (FUN_0202c940(work, len) > 0) {
        FUN_0202ced0(fp, r4, work, r7, len, sp10);
        FUN_02065774(work, r4, r8);
        FUN_02065774(r7, work, r8);
        FUN_0202cc2c(r7, fp, r5, len);
        FUN_0202cab0(r7, r6, r7, len);
        FUN_02065774(r5, r6, r8);
        FUN_02065774(r7, r5, r8);
    }
    FUN_0202c970(r6, r6, p2, len);
    FUN_0202ced0(0, r6, p2, p0, len, sp10);
}
