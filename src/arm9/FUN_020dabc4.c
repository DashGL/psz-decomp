// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p
struct S27 {
    int f0;
    void (*f4)(int, void *, int);
    unsigned char f8;
};
extern struct S27 *FUN_020dac74(int);
extern int DAT_0211dbb4[];

void FUN_020dabc4(void) {
    struct S27 *r4 = FUN_020dac74(1);
    if (r4 == 0) {
        return;
    }
    if (r4->f8 & 0x10) {
        void *p = FUN_020dac74(0x10);
        r4->f8 &= ~0x10;
        r4->f4(0x10, p, 0xd18);
    }
    if (r4->f8 & 8) {
        void *p = FUN_020dac74(8);
        r4->f8 &= ~8;
        r4->f4(8, p, 0xc);
    }
    if (r4->f8 & 4) {
        void *p = FUN_020dac74(4);
        r4->f8 &= ~4;
        r4->f4(4, p, 0x58);
    }
    if (r4->f8 & 2) {
        void *p = FUN_020dac74(2);
        r4->f8 &= ~2;
        r4->f4(2, p, 0x2300);
    }
    if (r4->f8 & 1) {
        r4->f8 &= ~1;
        r4->f4(1, r4, 0x24);
        DAT_0211dbb4[3] = 0;
    }
}
