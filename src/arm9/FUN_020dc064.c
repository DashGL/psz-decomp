// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
extern unsigned long long FUN_02067e0c(void);
extern unsigned char FUN_020dbd90(unsigned char);
extern int FUN_020dc148(void *, int);
extern void FUN_020dc2ac(void *, void *, int, int);
extern char DAT_020ec174[];

struct BitByte36 {
    unsigned char lo:4;
    unsigned char hi:4;
    unsigned char pad[0x23];
};

int FUN_020dc064(void *a0) {
    unsigned long long t = FUN_02067e0c();
    if (((t - *(unsigned long long *)((char *)a0 + 0xcb0)) << 6) / 0x82eaULL >= 0x96 ||
        ((struct BitByte36 *)((char *)a0 + (*(unsigned char *)((char *)a0 + 0xd0f) * 0x24) + 0x300))->lo == 1) {
        ((struct BitByte36 *)((char *)a0 + 0x300))[*(unsigned char *)((char *)a0 + 0xd0f)].lo = 0;
        (*(unsigned char *)((char *)a0 + 0xd0f))++;
        if (*(unsigned char *)((char *)a0 + 0xd10) <= *(unsigned char *)((char *)a0 + 0xd0f)) {
            (*(unsigned char *)((char *)a0 + 0xd15))++;
            *(unsigned char *)((char *)a0 + 0xd0f) = 0;
            *(unsigned char *)((char *)a0 + 0xd11) = FUN_020dbd90(*(unsigned char *)((char *)a0 + 0xd15));
        }
        if (*(signed char *)((char *)a0 + 0xd11) < 0) {
            *(unsigned char *)((char *)a0 + 0xd15) = 0;
            return FUN_020dc148(a0, 5);
        }
        *(unsigned long long *)((char *)a0 + 0xcb0) = FUN_02067e0c();
        FUN_020dc2ac(
            DAT_020ec174,
            (char *)a0 + 0x304 + (*(unsigned char *)((char *)a0 + 0xd0f) * 0x24),
            *(signed char *)((char *)a0 + 0xd11),
            0x300000
        );
    }
    return 5;
}
