// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
extern unsigned char *FUN_020dac74(int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);

void FUN_020daab8(const unsigned char *r5, const void *r7, int r6) {
    int i;
    unsigned char *r4 = FUN_020dac74(0x10);
    r4[0xd0c] = (r4[0xd0c] & ~0xf) | 1;
    FUN_020656b8(r4, 0, 0xf0);
    for (i = 0; i < 0x20; i++) {
        if (r5[i] == 0) {
            break;
        }
        r4[0x40 + i] = r5[i];
    }
    if (r7 == 0 || r6 == 0) {
        r4[0xe6] &= ~3;
    } else {
        int len;
        if (r6 == 1) {
            len = 5;
        } else if (r6 == 2) {
            len = 13;
        } else {
            len = 16;
        }
        FUN_02065774(r7, r4 + 0x80, len);
        r4[0xe6] = (r4[0xe6] & ~3) | ((unsigned char)r6 & 3);
    }
}
