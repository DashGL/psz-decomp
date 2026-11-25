// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
struct S16 {
    unsigned char pad0;
    unsigned char f01;
    char pad2[0x16];
    void (*f18)(void);
    char pad1c[0x2c];
    int (*f48)(void);
    int f4c;
    int f50;
};
extern struct S16 DAT_02107054;
extern void FUN_02021ad8(int);
extern void FUN_02066c68(int);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02020f6c(int);

void FUN_020249d8(void) {
    unsigned int start;

    DAT_02107054.f18();
    if (DAT_02107054.f50 == 0) {
        return;
    }
    FUN_02021ad8(DAT_02107054.f50);
    FUN_02066c68(100);
    FUN_02021ad8(DAT_02107054.f50);
    start = (unsigned int)(FUN_02067e0c() >> 16);
    while (DAT_02107054.f48() != 0 && (int)((unsigned int)(FUN_02067e0c() >> 16) - start) < 0x17) {
        if (DAT_02107054.f01 != 0) {
            FUN_02020f6c(4);
            return;
        }
        FUN_02066c68(100);
    }
}
