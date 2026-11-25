// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Pair {
    short a, b;
};
extern const struct Pair DAT_020ed83c[];

unsigned short FUN_0205cc08(int a) {
    int lo, hi, mid;
    short target;
    if (a >= 0) {
        lo = 0;
        hi = 0x400;
    } else {
        lo = 0x400;
        hi = 0x800;
    }
    target = a;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (target == DAT_020ed83c[mid].b) {
            break;
        }
        if (DAT_020ed83c[mid].b < target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return (unsigned short)((((mid << 1) + 1) << 16) / 0x2000);
}
