// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
struct G {
    int f0;
    volatile int f4;
    int f8;
};

extern struct G DAT_0211a180;
extern int FUN_0206b2ac(void);
extern void FUN_0206b968(unsigned int);
extern void FUN_0206bbd4(int, int, int, int);

int FUN_0206b4dc(int r5, int r4) {
    if (FUN_0206b2ac() == 0) {
        return 1;
    }
    DAT_0211a180.f4 = 0;
    FUN_0206b968(0x03006000);
    while (DAT_0211a180.f4 == 0) {
    }
    DAT_0211a180.f4 = 0;
    DAT_0211a180.f8 = 0;
    FUN_0206bbd4(0, 2, 0, 1);
    FUN_0206b968((r5 & 0xff) | 0x02006100);
    FUN_0206b968((unsigned short)r4 | 0x01010000);
    return 0;
}
