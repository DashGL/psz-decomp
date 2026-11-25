// Verified 2026-11-13: full 140-byte body, pinned 2.0/sp2p3, exact bytes and every relocation; restored consumed arguments.
// flags: -O4,p -noThumb
extern long long FUN_02067e0c(void);
extern void FUN_02068278(void);
extern void FUN_02065d8c(int, void (*)(void), unsigned int);
extern void FUN_02065e00(int);

void FUN_02067ebc(int a) {
    long long now = FUN_02067e0c();
    long long diff;
    unsigned short val;
    *(volatile unsigned short *)0x04000106 = 0;
    diff = *(long long *)(a + 0xc) - now;
    FUN_02065d8c(1, FUN_02068278, 0);
    if (diff < 0) {
        val = 0xfffe;
    } else if (diff < 0x10000) {
        val = ~diff;
    } else {
        val = 0;
    }
    *(volatile unsigned short *)0x04000104 = val;
    *(volatile unsigned short *)0x04000106 = 0xc1;
    FUN_02065e00(0x10);
}
