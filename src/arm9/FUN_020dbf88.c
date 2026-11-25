// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
extern unsigned long long FUN_02067e0c(void);
extern int FUN_020dc148(void *, int);
extern void FUN_020dc2ac(void *, void *, int, int);

struct BitByte4 {
    unsigned char lo:7;
    unsigned char hi:1;
    unsigned char pad[3];
};

int FUN_020dbf88(void *a0) {
    unsigned long long t = FUN_02067e0c();
    if (((t - *(unsigned long long *)((char *)a0 + 0xcb0)) << 6) / 0x82eaULL >= 0x96 ||
        ((struct BitByte4 *)((char *)a0 + (*(unsigned char *)((char *)a0 + 0xd0f) << 2) + 0x447))->hi == 1) {
        ((struct BitByte4 *)((char *)a0 + 0x447))[*(unsigned char *)((char *)a0 + 0xd0f)].hi = 1;
        while (*(unsigned char *)((char *)a0 + 0xd0f) < *(unsigned char *)((char *)a0 + 0xd12)) {
            if (((struct BitByte4 *)((char *)a0 + (*(unsigned char *)((char *)a0 + 0xd0f) << 2) + 0x447))->hi == 0) {
                break;
            }
            (*(unsigned char *)((char *)a0 + 0xd0f))++;
        }
        if (*(unsigned char *)((char *)a0 + 0xd12) <= *(unsigned char *)((char *)a0 + 0xd0f)) {
            *(unsigned char *)((char *)a0 + 0xd0f) = 0;
            return FUN_020dc148(a0, 4);
        }
        *(unsigned long long *)((char *)a0 + 0xcb0) = FUN_02067e0c();
        {
            int idx = *(unsigned char *)((char *)a0 + 0xd0f);
            FUN_020dc2ac(
                (char *)a0 + 0x474 + idx * 0xc0,
                (char *)a0 + 0x47c + idx * 0xc0,
                *(unsigned short *)((char *)a0 + 0x4a6 + idx * 0xc0) - 1,
                0x300000
            );
        }
    }
    return 4;
}
