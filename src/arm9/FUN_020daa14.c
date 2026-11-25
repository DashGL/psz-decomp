// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern unsigned char FUN_020dad04(void);
extern void FUN_02065774(void *, void *, int);
extern unsigned char *D_0211dbb4[];

int FUN_020daa14(void *p) {
    int r = 0;
    unsigned char c = FUN_020dad04();
    if (c >= 0xa && c <= 0x10) {
        unsigned char *q = D_0211dbb4[3];
        if (q[0x17] == 4 || q[0x17] == 8) {
            FUN_02065774(q + 0x18, p, 0xa);
            r = 1;
        }
    }
    return r;
}
