// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct Inner {
    char pad[0x1e0];
    unsigned int masks[1];
};

struct G {
    int f0;
    struct Inner *f4;
    int f8;
    int fc;
};

extern struct G DAT_021180e4;
extern void FUN_02065774(const void *, void *, int);
extern int FUN_02064cf4(int);

void *FUN_02064c68(const unsigned char *r0, int r6) {
    int r4;
    int r5;
    if (DAT_021180e4.f4 == 0) {
        return 0;
    }
    r5 = r0[2];
    if (r5 > DAT_021180e4.fc) {
        return 0;
    }
    r4 = r6 - 1;
    FUN_02065774(r0 + 3, (char *)DAT_021180e4.f4 + (r4 << 5) + r5 * DAT_021180e4.f8, DAT_021180e4.f8);
    DAT_021180e4.f4->masks[r4] |= (1U << r5);
    if (FUN_02064cf4(r6) != 0) {
        return (char *)DAT_021180e4.f4 + (r4 << 5);
    }
    return 0;
}
