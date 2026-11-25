// FUN_02066d68 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// FUN_02066d68 @ 0x02066d68 (0x34, arm)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern unsigned int D_0211817c[];

unsigned int FUN_02066d68(void) {
    int irq = FUN_020683d4();
    unsigned int r;
    if (D_0211817c[1] < 0xffffffffU) {
        r = D_0211817c[1];
        D_0211817c[1] = r + 1;
    }
    FUN_020683e8(irq);
    return r;
}
