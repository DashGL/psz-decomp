// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct DmaState {
    volatile int busy;
    int dmaNo;
    int f8;
    int fc;
    void (*cb)(void *);
    void *arg;
};

extern struct DmaState DAT_021180f8;
extern void FUN_020650f4(int, int);
extern void FUN_02065178(int, void *, unsigned int, int);
extern void FUN_02065010(int);
extern void FUN_02065d44(int, void (*)(void), int);
extern void FUN_02065488(void);
extern void FUN_01ff8000(int, void *, int, unsigned int);

void FUN_020653d0(int dmaNo, void *dest, unsigned int size, void (*cb)(void *), void *arg) {
    if (size == 0) {
        if (cb != 0) {
            cb(arg);
        }
        return;
    }
    while (DAT_021180f8.busy != 0) {
    }
    DAT_021180f8.busy = 1;
    DAT_021180f8.dmaNo = dmaNo;
    DAT_021180f8.cb = cb;
    DAT_021180f8.arg = arg;
    FUN_020650f4(dmaNo, 0x38000000);
    FUN_02065178(dmaNo, dest, size, 0);
    FUN_02065010(dmaNo);
    FUN_02065d44(dmaNo, FUN_02065488, 0);
    FUN_01ff8000(dmaNo, dest, 0x04000400, (size >> 2) | 0xfc400000u);
}
